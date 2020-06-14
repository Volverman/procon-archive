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

vector<ll> divisor(ll n) {
  vector<ll> ret;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ret.push_back(i);
      if(i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
  return (ret);
}

int main()
{
  ll N;
  cin >> N;
  vector<ll> A(N);
  map<ll,int> mp;
  REP(i, N){
    cin >> A[i];
    mp[A[i]]++;
  }
  
  sort(ALL(A));
  int cnt = 0;
  vector<bool> vec(A[N-1]+10,true);
  REP(i,N){
    if(vec.at(A[i])==true){
      if(mp[A[i]]==1){
        cnt++;
      }
      for(int j = 2*A[i];j<=A[N-1];j+=A[i]){
        vec.at(j)=false;
      }
    }
  }

  cout << cnt << endl;
}