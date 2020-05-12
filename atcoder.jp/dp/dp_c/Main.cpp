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
long long dp[100010][3];
  
int main()
{
  int N;
  cin >> N;
  vector<vector<int>> A(N,vector<int>(3));
  REP(i, N){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
  }
  
  REP(i,N){
    REP(j,3){
      REP(k,3){
        if(j==k){
          continue;
        }
        chmax(dp[i+1][k],A[i][k]+dp[i][j]);
      }
    }
  }

  ll MAX = 0;
  REP(i,3){
    MAX = max(MAX,dp[N][i]);
  }
  cout << MAX << endl;
}