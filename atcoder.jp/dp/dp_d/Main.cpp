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
long long dp[110][100010] = {0};
  
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
  
  REP(i,N){
    REP(j,W+1){
      if(j-A.at(i).at(0) >= 0){
        chmax(dp[i+1][j],dp[i][j-A.at(i).at(0)]+A.at(i).at(1));
      }
      chmax(dp[i+1][j],dp[i][j]);
    }
  }
  
  cout << dp[N][W] << endl;
}