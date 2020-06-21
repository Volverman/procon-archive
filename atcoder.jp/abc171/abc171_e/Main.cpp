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
  
  ll sum = A[0];
  FOR(i,1,N){
    sum^=A[i];
  }

  REP(i,N){
    ll x = sum^A[i];
    if(i!=N-1){
      cout << x << " ";
    }else{
      cout << x;
    }
  }
  cout << endl;
}