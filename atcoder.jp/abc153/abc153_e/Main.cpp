#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<ll,ll>;
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
long long dp[20010];
  
int main()
{
  ll H,N;
  cin >> H >> N;
  vector<P> A(N);
  REP(i,N) cin >> A[i].first >> A[i].second;

  REP(i,20010){
    dp[i]=INF;
  }

  dp[0]=0;
  REP(i,H+1){
    REP(j,N){
      chmin(dp[i+A[j].first],dp[i]+A[j].second);
    }
  }

  ll cnt = dp[20000];
  REPR(i,20000){
    if(dp[i]>1000000000){
      dp[i]=cnt;
    }else if(cnt>dp[i]){
      cnt=dp[i];
    }else{
      dp[i]=cnt;
    }
  }

  cout << dp[H] << endl;
}