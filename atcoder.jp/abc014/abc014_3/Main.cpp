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
  ll n;
  cin >> n;
  vector<ll> color(1000002,0);
  vector<P> A(n);
  REP(i,n){
    cin >> A[i].first >> A[i].second;
    color[A[i].first]++;
    color[A[i].second+1]--;
  }
  ll sum = 0;
  REP(i,1000002){
    sum+=color[i];
    color[i]=sum;
  }
  ll MAX = 0;
  REP(i,1000001){
    MAX=max(MAX,color[i]);
  }
  cout << MAX << endl;
}