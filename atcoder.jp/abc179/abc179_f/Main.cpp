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
  ll N,Q;
  cin >> N >> Q;
  vector<P> A(Q);
  REP(i,Q){
    cin >> A[i].first >> A[i].second;
    A[i].se--;
  }
  ll H=N-2;
  ll W=N-2;
  ll cnt=0;
  vector<ll> vecw(N-1,N-2);
  vector<ll> vech(N-1,N-2);
  REP(i,Q){
    if(A[i].fi==1){
      if(A[i].se<=W){
        REP2(j,A[i].se+1,W){
          vecw[j]=H;
        }
        W=A[i].se-1;
        cnt+=H;
      }else{
        cnt+=vecw[A[i].se];
      }
    }else{
      if(A[i].se<=H){
        REP2(j,A[i].se+1,H){
          vech[j]=W;
        }
        H=A[i].se-1;
        cnt+=W;
      }else{
        cnt+=vech[A[i].se];
      }
    }
  }

  cout << (N-2)*(N-2)-cnt << endl;
}
