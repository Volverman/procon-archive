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

using mint=modint998244353;

struct S{
  mint a;
  int size;
};

struct F{
  mint b,c;
};

S op(S x,S y){
  return S{x.a+y.a,x.size+y.size};
}

S e(){
  return S{0,0};
}

S mapping(F f,S s){
  return S{f.b*s.a+f.c*s.size,s.size};
}

F composition(F f,F g){
  return F{f.b*g.b,f.b*g.c+f.c};
}

F id(){
  return F{1,0};
}


int main()
{
  int N,Q;
  cin >> N >> Q;
  vector<S> A(N);
  REP(i, N){
    int x;
    cin >> x;
    A[i]=S{x,1};
  }
  lazy_segtree<S,op,e,F,mapping,composition,id> lst(A);
  REP(i,Q){
    int x;
    cin >> x;
    if(x==0){
      int l,r,b,c;
      cin >> l >> r >> b >> c;
      lst.apply(l,r,F{b,c});
    }else{
      int l,r;
      cin >> l >> r;
      cout << lst.prod(l,r).a.val() << endl;
    }
  }
}