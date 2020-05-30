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

int main()
{
  ll N;
  cin >> N;
  vector<ll> A(N+1);
  REP(i, N+1) cin >> A[i];
  ll sum=0;
  vector<ll> C(N+1);
  REPR(i,N){
    sum+=A[i];
    C[i]=sum;
  }
  vector<ll> B(N+1);
  B[0]=1;
  FOR(i,1,N+1){
    if(B[i-1]>=A[i-1]){
      B[i]=min((B[i-1]-A[i-1])*2,C[i]);
    }
  }
  REP(i,N+1){
    if(B[i]<A[i]){
      cout << -1 << endl;
      return 0;
    }
  }
  ll ans = 0;
  REP(i,N+1){
    ans+=B[i];
  }
  cout << ans << endl;
}