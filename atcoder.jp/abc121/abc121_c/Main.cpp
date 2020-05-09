#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
 
int main()
{
  ll N,M;
  cin >> N >> M;
  vector<pair<ll, ll>> a(N);
  REP(i,N){
    cin >> a.at(i).first >> a.at(i).second;
  }
  sort(ALL(a));

  ll num = 0;
  ll sum = 0;
  REP(i,N){
    if(M > num + a.at(i).second){
      num += a.at(i).second;
      sum += a.at(i).first*a.at(i).second;
    }else{
      sum += a.at(i).first*(M-num);
      break;
    }
  }
  cout << sum << endl;
}