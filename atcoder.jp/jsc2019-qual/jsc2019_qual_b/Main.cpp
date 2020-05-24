#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<int,int>;

struct fenwick_tree {
  typedef int T;
  T n;
  vector<T> bit;

  // 各要素の初期値は 0
  fenwick_tree(T num) : bit(num+1, 0) { n = num; }

  // a_i += w
  void add(T i, T w) {
    for (T x = i; x <= n; x += x & -x) {
      bit[x] += w;
    }
  }
  // [1, i] の和を計算.
  T sum(T i) {
    T ret = 0;
    for (T x = i; x > 0; x -= x & -x) {
      ret += bit[x];
    }
    return ret;
  }
  // [left+1, right] の和を計算.
  T sum(T left, T right) {
    return sum(right) - sum(left);
  }
};

const int mod = 1000000007;
struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}

int main()
{
  ll N,k;
  cin >> N >> k;
  mint K=k;

  vector<int> A(N);
  REP(i, N) cin >> A[i];
  fenwick_tree f_tree(2010);

  mint ans = 0;
  for (int j = 0; j < N; j++) {
    ans += j - f_tree.sum(A[j]);
    f_tree.add(A[j], 1);
  }
  mint ans2 = 0;
  for (int j = 0; j < N; j++) {
    if(A[j]>1){
      ans2 += f_tree.sum(A[j]-1);
    }
  }
  mint x = ans*K+ans2*K*(K-1)/2;
  cout << x << endl;
}