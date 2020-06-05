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
ll gcd(ll a, ll b){
  if (a%b == 0){
    return(b);
  }else{
    return(gcd(b, a%b));
  }
}
ll lcm(ll a, ll b){
  return a * b / gcd(a, b);
}

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
  ll A,B;
  cin >> A >> B;

  map<ll,int> mp=prime_factor(gcd(A,B));
  cout << mp.size()+1 << endl;
}