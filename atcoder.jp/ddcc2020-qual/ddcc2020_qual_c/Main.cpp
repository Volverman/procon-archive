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

int main()
{
  int H,W,K;
  cin >> H >> W >> K;
  vector<string> A(H);
  REP(i, H) cin >> A[i];
  
  vector<vector<int>> B(H,vector<int>(W));
  int cnt = 1;
  int flag2=0;
  REP(i,H){
    int now=0;
    int flag=0;
    REP(j,W){
      if(A.at(i).at(j)=='#'){
        FOR(k,now,j+1){
          B.at(i).at(k)=cnt;
        }
        cnt++;
        now=j+1;
        flag=1;
      }
    }
    if(flag==1&&flag2==1){
      FOR(k,now,W){
        B.at(i).at(k)=cnt-1;
      }
    }else if(flag==1&&flag2==0){
      FOR(k,now,W){
        B.at(i).at(k)=cnt-1;
      }
      flag2=1;
      REP(k,i){
        REP(l,W){
          B.at(k).at(l)=B.at(i).at(l);
        }
      }
    }else if(flag==0&&flag2==0){
      continue;
    }else if(flag==0&&flag2==1){
      REP(k,W){
        B.at(i).at(k)=B.at(i-1).at(k);
      }
    }
  }

  REP(i,H){
    REP(j,W){
      if(j!=W-1){
        cout << B.at(i).at(j) << " ";
      }else{
        cout << B.at(i).at(j);
      }
    }
    cout << endl;
  }
}