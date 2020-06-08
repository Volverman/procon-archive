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
  ll N,M;
  cin >> N >> M;

  vector<ll> A(M);
  REP(i, M) cin >> A[i];
  
  vector<int> max(N,0);

  vector<int> ans;
  REP(i,M){
    auto iter = lower_bound(ALL(max),A[i]);
    ll x = distance(max.begin(),iter)-1;
    if(x<0){
      ans.push_back(-1);
    }else{
      max.at(x)=A[i];
      ans.push_back(N-x);
    }
  }

  for(auto z:ans){
    cout << z << endl;
  }
}