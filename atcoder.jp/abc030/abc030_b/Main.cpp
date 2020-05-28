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
  int n,m;
  cin >> n >> m;

  n%=12;
  double ans = min(abs(6*m-(60*n+m)/2.0),360-abs(6*m-(60*n+m)/2.0));
  cout << fixed << setprecision(10) << ans << endl;
}