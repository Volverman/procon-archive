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

  ll cnt = 0;
  REP(i,N-2){
    FOR(j,i+1,N-1){
      auto itr = lower_bound(A.begin()+j+1,A.end(),A[i]+A[j]);
      auto itr2 = upper_bound(A.begin()+j+1,A.end(),abs(A[i]-A[j]));
      ll x = distance(itr,A.end());
      ll y = distance(itr2,A.end());
      cnt+=y-x;
      // FOR(k,j+1,N){
        // if(A[k]<A[i]+A[j]&&abs(A[i]-A[j])<A[k]){
        //   cnt++;
        // }else if(A[k]>=A[i]+A[j]){
        //   break;
        // }
      // }
    }
  }

  cout << cnt << endl;
}