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
  ll A;
  cin >> A;

  ll ans=-1;
  FOR(i,10,10010){
    ll x = i;
    ll f = 0;
    ll t = 0;
    while(x!=0){
      f+=(x%10)*pow(i,t);
      x/=10;
      t++;
    }
    if(f==A){
      ans=i;
      break;
    }
  }

  cout << ans << endl;
}