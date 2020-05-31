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
map<ll, int > prime_factor(ll n) {
  map<ll, int > ret;
  for(ll i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}

int main()
{
  ll N;
  cin >> N;

  map<ll,int> mp=prime_factor(N);
  ll ans = 0;
  for(auto x:mp){
    ll i = 1;
    while(1){
      x.second-=i;
      if(x.second<i+1){
        break;
      }
      i++;
    }
    ans+=i;
  }

  cout << ans << endl;
}