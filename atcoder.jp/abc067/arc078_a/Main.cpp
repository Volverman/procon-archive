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
  vector<ll> B(N);
  ll sum = 0;
  REP(i, N){
    cin >> A[i];
    sum+=A[i];
    B[i]=sum;
  }
  
  ll MIN = INF;
  REP(i,N-1){
    MIN = min(MIN,abs(B[i]-(B[N-1]-B[i])));
  }

  cout << MIN << endl;
}