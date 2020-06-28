#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int dx[8] = {1,1,1,0,0,-1,-1,-1};
int dy[8] = {1,0,-1,1,-1,1,0,-1};

int main()
{
  int H,W;
  cin >> H >> W;
  vector<string> A(H);
  REP(i, H) cin >> A[i];
  
  vector<string> B(H);
  REP(i,H){
    REP(j,W){
      B.at(i).push_back('.');
    }
  }
  REP(i,H){
    REP(j,W){
      int cnt = 0;
      if(A.at(i).at(j)=='#'){
        REP(k,8){
          int ny = i+dy[k];
          int nx = j+dx[k];
          if(ny<0||nx<0||nx>W-1||ny>H-1) continue;
          if(A.at(ny).at(nx)=='.'){
            cnt++;
          }
        }
        if(cnt==0){
          B.at(i).at(j)='#';
        }
      }
    }
  }

  vector<string> C = B;
  REP(i,H){
    REP(j,W){
      if(B.at(i).at(j)=='#'){
        REP(k,8){
          int ny = i+dy[k];
          int nx = j+dx[k];
          if(ny<0||nx<0||nx>W-1||ny>H-1) continue;
          C.at(ny).at(nx)='#';
        }
      }
    }
  }

  int flag = 0;
  REP(i,H){
    REP(j,W){
      if(A.at(i).at(j)!=C.at(i).at(j)){
        flag=1;
      }
    }
  }

  if(flag==1){
    cout << "impossible" << endl;
  }else{
    cout << "possible" << endl;
    REP(i,H){
      REP(j,W){
        cout << B.at(i).at(j);
      }
      cout << endl;
    }
  }
}