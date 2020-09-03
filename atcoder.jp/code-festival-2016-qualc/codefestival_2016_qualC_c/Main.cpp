#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REP2(i, a, b) for(int i = a;i <= b;i++)
#define REPR(i, a, b) for(int i = a; i >= b; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e12
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
  ll N;
  cin >> N;
  VEC(ll,T,N);
  VEC(ll,A,N);

  vector<ll> MAX(N,INF);
  vector<ll> MIN(N,1);
  MAX[0]=T[0];
  MIN[0]=T[0];
  REP(i,N-1){
    if(T[i+1]>T[i]){
      MAX[i+1]=T[i+1];
      MIN[i+1]=T[i+1];
    }else{
      if(MAX[i+1]>T[i+1]){
        MAX[i+1]=T[i+1];
      }
    }
  }
  if(MAX[N-1]<A[N-1]||MIN[N-1]>A[N-1]){
    cout << 0 << endl;
    return 0;
  }
  MAX[N-1]=A[N-1];
  MIN[N-1]=A[N-1];
  REPR(i,N-2,0){
    if(A[i+1]<A[i]){
      if(A[i]>MAX[i]||A[i]<MIN[i]){
        cout << 0 << endl;
        return 0;
      }
      MAX[i]=A[i];
      MIN[i]=A[i];
    }else{
      if(MAX[i]>A[i]){
        MAX[i]=A[i];
      }
    }
  }

  mint ans = 1;
  REP(i,N){
    ans*=(MAX[i]-MIN[i]+1);
  }

  cout << ans << endl;
}