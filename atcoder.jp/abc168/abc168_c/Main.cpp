#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define PI 3.141592653589793
using namespace std;
typedef long long ll;
using P = pair<int,int>;
  
int main()
{
  int A, B, H, M;
  cin >> A >> B >> H >> M;

  double deg = min(360.0-abs(6.0*M-(60.0*H+M)/2),abs(6.0*M-(60.0*H+M)/2));
  double radian = deg * PI / 180.0;
  cout << fixed << setprecision(20) << sqrt(A*A+B*B-2*A*B*cos(radian)) << endl;
}