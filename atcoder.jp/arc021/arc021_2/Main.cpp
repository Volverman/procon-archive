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
  ll L;
  cin >> L;
  vector<ll> A(L);
  REP(i, L) cin >> A[i];
  
  vector<ll> ans;
  ans.push_back(0);
  REP(i,L-1){
    ans.push_back(A[i]^ans[i]);
  }
  if((ans[L-1]^A[L-1])==0){
    REP(i,L){
      cout << ans[i] << endl;
    }
  }else{
    cout << -1 << endl;
  }
}