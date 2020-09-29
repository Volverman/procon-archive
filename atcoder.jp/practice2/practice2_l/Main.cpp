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

struct S{
  ll cnt0;
  ll cnt1;
  ll rot;
};

struct F{
  bool b;
};

S op(S x,S y){
  return S{x.cnt0+y.cnt0,x.cnt1+y.cnt1,x.rot+y.rot+x.cnt1*y.cnt0};
}

S e(){
  return S{0,0,0};
}

S mapping(F f,S s){
  if(!f.b) return s;
  return S{s.cnt1,s.cnt0,s.cnt0*s.cnt1-s.rot};
}

F composition(F f,F g){
  return F{f.b^g.b};
}

F id(){
  return F{false};
}

int main()
{
  int N,Q;
  cin >> N >> Q;
  vector<S> A(N);
  REP(i, N){
    int x;
    cin >> x;
    if(x==0){
      A[i]=S{1LL,0LL,0LL};
    }else{
      A[i]=S{0LL,1LL,0LL};
    }
  }
  lazy_segtree<S,op,e,F,mapping,composition,id> lst(A);
  // REP(i,N){
  //   cout << lst.get(i).cnt1 << endl;
  // }
  // cout << endl;
  REP(i,Q){
    int x,l,r;
    cin >> x >> l >> r;
    l--;
    if(x==1){
      lst.apply(l,r,F{true});
    }else{
      cout << lst.prod(l,r).rot << endl;
    }
  }
}