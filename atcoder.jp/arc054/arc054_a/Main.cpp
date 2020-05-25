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
  ll L,X,Y,S,D;
  cin >> L >> X >> Y >> S >> D;

  long double ans;
  if(S==D){
    ans = 0;
  }else if(S<D){
    if(Y<=X){
      ans = double(D-S)/double(X+Y);
    }else{
      ans = min(double(D-S)/double(X+Y),double(L-D+S)/double(Y-X));
    }
  }else{
    if(Y<=X){
      ans = double(L-S+D)/double(X+Y);
    }else{
      ans = min(double(L-S+D)/double(X+Y),double(S-D)/double(Y-X));
    }
  }

  cout << fixed << setprecision(10) << ans << endl;
}