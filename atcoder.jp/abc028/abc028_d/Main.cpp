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
  long double N,K;
  cin >> N >> K;

  long double ans = ((K-1)*(N-K)*6+(N-K)*3+(K-1)*3+1)/(N*N*N);
  cout << fixed << setprecision(20) << ans << endl;
}