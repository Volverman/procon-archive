#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
  
int main()
{
  ll N;
  cin >> N;

  ll b[200010];
  vector<ll> a(N);
  REP(i, N){
    cin >> a[i];
    b[a.at(i)]++;
  }
  
  ll c[200010];

  ll sum = 0;
  REP(i,200010){
    sum+=b[i]*(b[i]-1)/2;
    c[i] = b[i]*(b[i]-1)/2-(b[i]-1)*(b[i]-2)/2;
  }
  REP(i,N){
    cout << sum - c[a.at(i)] << endl;
  }
}