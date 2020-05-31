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
  int N;
  cin >> N;
  vector<ll> A(N);
  int flag=0;
  REP(i, N){
    cin >> A[i];
    if(A[i]==0){
      flag=1;
    }
  }
  if(flag==0){
    ll ans=1;
    REP(i,N){
      if(1000000000000000000/ans<A[i]||ans*A[i]>1000000000000000000){
        cout << -1 << endl;
        return 0;
      }
      ans*=A[i];
    }
    cout << ans << endl;
  }else{
    cout << 0 << endl;
  }
}