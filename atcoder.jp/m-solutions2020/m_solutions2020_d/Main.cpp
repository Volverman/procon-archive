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
  vector<ll> A(N);
  REP(i, N) cin >> A[i];
  A.push_back(0);

  int cnt = 0;
  ll ans = 1000;
  REP(i,N){
    if(A[i]<=A[i+1]){
      cnt++;
    }else{
      ans=ans/A[i-cnt]*A[i]+ans%A[i-cnt];
      cnt=0;
    }
  }

  cout << ans << endl;
}