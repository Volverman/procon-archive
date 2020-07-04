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
  int N,K;
  cin >> N >> K;
  vector<ll> A(N);
  REP(i, N) cin >> A[i];

  ll sum = 0;
  REP(i,N){
    sum+=A[i]*(min(N-1,i+K-1)-max(0,i-K+1)+1-K+1);
  }

  cout << sum << endl;
}