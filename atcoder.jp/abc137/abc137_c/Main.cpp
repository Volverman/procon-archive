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
  ll N;
  cin >> N;

  map<string,ll> mp;
  vector<string> s(N);
  REP(i, N){
    cin >> s[i];
    sort(ALL(s[i]));
    mp[s[i]]++;
  }
  
  ll ans = 0;
  for(auto x:mp){
      ans+=x.second*(x.second-1)/2;
  }

  cout << ans << endl;
}