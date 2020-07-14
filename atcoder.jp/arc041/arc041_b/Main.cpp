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

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main()
{
  int N,M;
  cin >> N >> M;
  vector<string> A(N);
  REP(i, N) cin >> A[i];
  
  vector<vector<int>> ans(N,vector<int>(M,0));
  
  REP(i,N){
    REP(j,M){
      if(A.at(i).at(j)>'0'){
        ans.at(i+1).at(j)=A.at(i).at(j)-'0';
        REP(k,4){
          A.at(i+1+dy[k]).at(j+dx[k])-=ans.at(i+1).at(j);
        }
      }
    }
  }

  REP(i,N){
    REP(j,M){
      cout << ans.at(i).at(j);
    }
    cout << endl;
  }
}