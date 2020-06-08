#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e12
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
  ll N,L;
  cin >> N >> L;

  vector<bool> har(L+10,false);
  vector<ll> A(N);
  REP(i, N){
    cin >> A[i];
    har.at(A[i])=true;
  }
  
  ll T1,T2,T3;
  cin >> T1 >> T2 >> T3;

  REP(i,100010){
    dp[i]=INF;
  }

  dp[0]=0;
  REP(i,L){
    if(har.at(i+1)==true){
      chmin(dp[i+1],dp[i]+T1+T3);
    }else{
      chmin(dp[i+1],dp[i]+T1);
    }
    if(har.at(i+2)==true){
      chmin(dp[i+2],dp[i]+T2+T1+T3);
    }else{
      chmin(dp[i+2],dp[i]+T2+T1);
    }
    if(har.at(i+4)==true){
      chmin(dp[i+4],dp[i]+T2*3+T1+T3);
    }else{
      chmin(dp[i+4],dp[i]+T2*3+T1);
    }
  }
  chmin(dp[L],dp[L-1]+T1/2+T2/2);
  chmin(dp[L],dp[L-2]+T1/2+(T2/2)*3);
  if(L>=3){
    chmin(dp[L],dp[L-3]+T1/2+(T2/2)*5);
  }
  cout << dp[L] << endl;
}