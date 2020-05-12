#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
long long dp[110][100010];
  
int main()
{
  int N, W;
  cin >> N >> W;
  vector<vector<int>> A(N,vector<int>(2));
  REP(i, N){
    REP(j, 2){
      cin >> A.at(i).at(j);
    }
  }
  
  REP(i,110){
    REP(j,100010){
      dp[i][j] = INF;
    }
  }

  dp[0][0] = 0;

  REP(i,N){
    REP(j,100010){
      if(j-A.at(i).at(1)>=0){
        chmin(dp[i+1][j],dp[i][j-A.at(i).at(1)]+A.at(i).at(0));
      }
      chmin(dp[i+1][j],dp[i][j]);
    }
  }

  int MAX = 0;
  REP(i,100010){
    if(dp[N][i] <= W){
      MAX = max(MAX,i);
    }
  }
  cout << MAX << endl;
}