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
  ll N,K;
  cin >> N >> K;
  vector<ll> A(N);
  int cntp=0;
  int cntm=0;
  int cntz=0;
  vector<ll> B;
  vector<ll> D;
  REP(i, N){
    cin >> A[i];
    if(A[i]>0){
      cntp++;
      B.push_back(A[i]);
    }else if(A[i]==0){
      B.push_back(A[i]);
      cntz++;
    }else{
      D.push_back(A[i]);
      cntm++;
    }
  }
  
  sort(ALL(A));
  reverse(ALL(A));
  sort(ALL(B));
  reverse(ALL(B));
  sort(ALL(D));
  
  
  if(K==N){
    mint ans = 1;
    REP(i,N){
      ans*=A[i];
    }
    cout << ans << endl;
  }else if(K%2==1&&cntz==0&&cntp==0){
    mint ans = 1;
    REP(i,K){
      ans*=A[i];
    }
    cout << ans << endl;
  }else{
    mint ans = 1;
    int x = 0;
    int y = 0;
    int now = 0;
    while(true){
      if(now+2>K){
        break;
      }
      if(x<=(int)B.size()-2&&y<=(int)D.size()-2){
        if(B[x]*B[x+1]>D[y]*D[y+1]){
          ans*=B[x];
          x+=1;
          now+=1;
        }else{
          ans*=D[y]*D[y+1];
          y+=2;
          now+=2;
        }
      }else if(x<=(int)B.size()-2){
        ans*=B[x];
        x+=1;
        now+=1;
      }else if(y<=(int)D.size()-2){
        ans*=D[y]*D[y+1];
        y+=2;
        now+=2;
      }
    }
    if(K-now==1){
      ans*=B[x];
    }

    cout << ans << endl;
  }
}