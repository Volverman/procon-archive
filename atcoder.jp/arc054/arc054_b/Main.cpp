#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  long double P;
  cin >> P;
  long double x = (-1.5)*log2(1.5/(P*log(2)));
  if(x<0){
    cout << fixed << setprecision(10) << P << endl;
  }else{
    cout << fixed << setprecision(10) << x+P*pow(2,(-x)/1.5) << endl;
  }
}