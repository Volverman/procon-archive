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
long long dp[100010];
 
int main()
{
  int N;
  cin >> N;
  vector<ll> h(N);
  REP(i, N) cin >> h[i];
  

  REP(i,100010){
    dp[i] = INF;
  }

  //dp[i] = i番目に到達するまでの最小コスト
  dp[0] = 0;

  FOR(i,1,N){
    chmin(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
    if(i>1){
      chmin(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
    }
  }

  cout << dp[N-1] << endl;
}