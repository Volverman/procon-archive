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
  vector<ll> A(N);
  REP(i, N) cin >> A[i];
  
  sort(ALL(A));
  reverse(ALL(A));

  ll ans = A[0];
  FOR(i,2,N){
    ans+=A[i/2];
  }
  cout << ans << endl;
}