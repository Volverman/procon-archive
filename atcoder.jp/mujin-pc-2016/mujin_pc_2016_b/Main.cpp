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
  int A,B,C;
  cin >> A >> B >> C;

  if(B<A){
    int x = A;
    A=B;
    B=x;
  }
  if(C<B){
    int x = C;
    C=B;
    B=x;
  }

  double MAX = A+B+C;
  double MIN;
  if(C>A+B){
    MIN=C-A-B;
  }else{
    MIN=0;
  }
  double ans = MAX*MAX*3.14159265358979-MIN*MIN*3.14159265358979;
  cout << fixed << setprecision(10) << ans << endl;
  
}