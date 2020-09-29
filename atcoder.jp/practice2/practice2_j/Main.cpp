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

int op(int x,int y){
  return max(x,y);
}

int e(){
  return -1;
}

int z;

bool f(int x){
  return x<z;
}

int main()
{
  int N,Q;
  cin >> N >> Q;
  vector<int> A(N);
  segtree<int,op,e> st(N);
  REP(i, N){
    cin >> A[i];
    st.set(i,A[i]);
  }
  REP(i,Q){
    int T;
    cin >> T;
    if(T==1){
      int x,v;
      cin >> x >> v;
      x--;
      st.set(x,v);
    }else if(T==2){
      int l,r;
      cin >> l >> r;
      l--;
      cout << st.prod(l,r) << endl;
    }else{
      int x;
      cin >> x >> z;
      x--;
      cout << st.max_right<f>(x)+1 << endl;
    }
  }
  
}