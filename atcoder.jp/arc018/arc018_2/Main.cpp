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
using P = pair<ll,ll>;

int main()
{
  ll N;
  cin >> N;
  vector<P> A(N);
  REP(i,N) cin >> A[i].first >> A[i].second;
  
  int cnt = 0;
  REP(i,N){
    FOR(j,i+1,N){
      FOR(k,j+1,N){
        ll x1=A[j].first-A[i].first;
        ll y1=A[j].second-A[i].second;
        ll x2=A[k].first-A[i].first;
        ll y2=A[k].second-A[i].second;
        if(abs(x1*y2-x2*y1)%2==0&&abs(x1*y2-x2*y1)>0){
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
}