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
long long dp[110000];
 
int main()
{
  int N, K;
  cin >> N >> K;

  vector<ll> h(N);
  REP(i, N) cin >> h[i];
  
  REP(i,110000){
    dp[i] = INF;
  }

  dp[0] = 0;

  FOR(i,0,N){
    FOR(j,1,K+1){
      chmin(dp[i+j],dp[i]+abs(h[i+j]-h[i]));
    }
  }

  cout << dp[N-1] << endl;
}