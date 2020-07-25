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
  ll N;
  cin >> N;
  vector<ll> ans;
  REP(i,170){
    ll x = N-i;
    int cnt = 0;
    while(x>0){
      cnt+=x%10;
      x/=10;
    }
    if(cnt==i){
      ans.push_back(N-i);
    }
  }
  sort(ALL(ans));
  cout << ans.size() << endl;
  REP(i,sz(ans)){
    cout << ans.at(i) << endl;
  }
}