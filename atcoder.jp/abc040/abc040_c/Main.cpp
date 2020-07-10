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
  REP(i,100010){
    dp[i]=INF;
  }

  ll N;
  cin >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  
  dp[0]=0;
  REP(i,N){
    chmin(dp[i+1],dp[i]+abs(A[i+1]-A[i]));
    chmin(dp[i+2],dp[i]+abs(A[i+2]-A[i]));
  }

  cout << dp[N-1] << endl;
}