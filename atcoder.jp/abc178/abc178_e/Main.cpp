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
  ll N;
  cin >> N;
  vector<P> A(N);
  REP(i,N) cin >> A[i].first >> A[i].second;
  vector<ll> f0(N);
  vector<ll> f1(N);
  ll MAX0=-INF,MAX1=-INF,MIN0=INF,MIN1=INF;
  REP(i,N){
    f0[i]=A[i].fi-A[i].se;
    MAX0=max(MAX0,f0[i]);
    MIN0=min(MIN0,f0[i]);
    f1[i]=A[i].fi+A[i].se;
    MAX1=max(MAX1,f1[i]);
    MIN1=min(MIN1,f1[i]);
  }

  cout << max(MAX0-MIN0,MAX1-MIN1) << endl;
}
