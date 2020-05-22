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

ll dp[100010]={0};

int main()
{
  ll N, M;
  cin >> N >> M;
  dp[0]=1;
  dp[1]=1;
  FOR(i,2,N+1){
    dp[i]=(dp[i-1]+dp[i-2])%MOD;
  }
  if(M!=0){
    vector<int> A(M);
    REP(i, M) cin >> A[i];
    
    ll ans=dp[A[0]-1];
    int flag = 0;
    REP(i,M-1){
      if(A[i]+1==A[i+1]){
        flag = 1;
        break;
      }else{
        ans=((ans%MOD)*(dp[A[i+1]-1-A[i]-1]%MOD))%MOD;
      }
    }
    ans=((ans%MOD)*(dp[N-A[M-1]-1]%MOD))%MOD;

    if(flag == 1){
      cout << 0 << endl;
    }else{
      cout << ans << endl;
    }
  }else{
    cout << dp[N] << endl;
  }
}