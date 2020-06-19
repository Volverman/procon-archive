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
  int N;
  cin >> N;
  string s1,s2;
  cin >> s1 >> s2;

  mint ans=1;
  int flag = 0;
  if(s1.at(0)!=s2.at(0)){
    ans*=6;
    flag=1;
    FOR(i,2,N){
      if(s1.at(i)==s2.at(i)&&flag==0){
        flag=0;
        ans*=2;
      }else if(s1.at(i)==s2.at(i)&&flag==1){
        flag=0;
        ans*=1;
      }else if(s1.at(i)!=s2.at(i)&&flag==0){
        flag=1;
        ans*=2;
        i++;
      }else if(s1.at(i)!=s2.at(i)&&flag==1){
        flag=1;
        ans*=3;
        i++;
      }
    }
  }else{
    ans*=3;
    flag=0;
    FOR(i,1,N){
      if(s1.at(i)==s2.at(i)&&flag==0){
        flag=0;
        ans*=2;
      }else if(s1.at(i)==s2.at(i)&&flag==1){
        flag=0;
        ans*=1;
      }else if(s1.at(i)!=s2.at(i)&&flag==0){
        flag=1;
        ans*=2;
        i++;
      }else if(s1.at(i)!=s2.at(i)&&flag==1){
        flag=1;
        ans*=3;
        i++;
      }
    }
  }

  cout << ans << endl;
}