#include <bits/stdc++.h>
#include <atcoder/all>
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
using namespace atcoder;
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
  int N,D;
  cin >> N >> D;
  vector<P> A(N);
  REP(i,N) cin >> A[i].first >> A[i].second;
  two_sat ts(N);
  REP(i,N){
    FOR(j,i+1,N){
      if(abs(A[i].fi-A[j].fi)<D){
        ts.add_clause(i,false,j,false);
      }
      if(abs(A[i].fi-A[j].se)<D){
        ts.add_clause(i,false,j,true);
      }
      if(abs(A[i].se-A[j].fi)<D){
        ts.add_clause(i,true,j,false);
      }
      if(abs(A[i].se-A[j].se)<D){
        ts.add_clause(i,true,j,true);
      }
    }
  }

  if(!ts.satisfiable()){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
    vector<bool> ans=ts.answer();
    REP(i,N){
      if(ans[i]){
        cout << A[i].fi << endl;
      }else{
        cout << A[i].se << endl;
      }
    }
  }
}