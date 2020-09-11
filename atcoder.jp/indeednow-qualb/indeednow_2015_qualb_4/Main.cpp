#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REP2(i, a, b) for(int i = a;i <= b;i++)
#define REPR(i, a, b) for(int i = a; i >= b; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define PI 3.14159265358979323846
#define vi vector<int>
#define vll vector<ll>
#define vi2 vector<vector<int>>
#define eb emplace_back
#define fi first
#define se second
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
using P = pair<ll,ll>;
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1}, dy[]{1, 0, -1, 0, -1, 1, -1, 1};
#define INT(name) int name;cin >> name;
#define VEC(type,name,n) vector<type> name(n);REP(i,n) cin >> name[i];

template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

int main()
{
  ll N,C;
  cin >> N >> C;
  VEC(ll,A,N);
  vector<vector<ll>> vec(C+1,vector<ll>());
  REP2(i,1,C){
    vec[i].push_back(-1);
  }
  REP(i,N){
    vec[A[i]].push_back(i);
  }
  REP2(i,1,C){
    vec[i].push_back(N);
  }

  ll all = (N*(N+1))/2;
  REP2(i,1,C){
    ll ans = all;
    REP(j,sz(vec[i])-1){
      ans-=((vec[i][j+1]-vec[i][j]-1)*(vec[i][j+1]-vec[i][j]))/2;
    }
    cout << ans << endl;
  }
}
