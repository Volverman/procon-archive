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
  long double W,H,x,y;
  cin >> W >> H >> x >> y;

  int flag = 0;
  if(W/2.0==x&&H/2.0==y){
    flag = 1;
  }

  cout << fixed << setprecision(10) << W*H/2.0 << " " << flag << endl; 
}