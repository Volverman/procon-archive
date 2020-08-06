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

vector<long long> fact, fact_inv, inv;
 
/*  init_nCk :二項係数のための前処理
    計算量:O(n)
*/
void init_nCk(int SIZE) {
    fact.resize(SIZE + 5);
    fact_inv.resize(SIZE + 5);
    inv.resize(SIZE + 5);
    fact[0] = fact[1] = 1;
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < SIZE + 5; i++) {
        fact[i] = fact[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        fact_inv[i] = fact_inv[i - 1] * inv[i] % MOD;
    }
}
 
/*  nCk :MODでの二項係数を求める(前処理 int_nCk が必要)
    計算量:O(1)
*/
long long nCk(int n, int k) {
    assert(!(n < k));
    assert(!(n < 0 || k < 0));
    return fact[n] * (fact_inv[k] * fact_inv[n - k] % MOD) % MOD;
}
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
  ll N,K;
  cin >> N >> K;
  VEC(ll,A,N);
  sort(ALL(A));
  init_nCk(N);
  mint ans = 0;
  REP(i,N-K+1){
    ans+=nCk(N-i-1,K-1)*A[N-1-i];
  }
  REP(i,N-K+1){
    ans-=nCk(N-i-1,K-1)*A[i];
  }

  cout << ans << endl;
}