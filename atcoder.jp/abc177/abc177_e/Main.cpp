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

class OSA_K{
public:
  vector<ll> minFactor;
  
  OSA_K(ll sz_):minFactor(sz_,-1){
    REP2(i,2,sz_){
      if(minFactor[i]==-1){
        for(ll j=i;j<=sz_;j+=i){
          minFactor[j]=i;
        }
      }
    }
  }

  void init(ll sz_){
    minFactor.assign(sz_,-1);
    REP2(i,2,sz_){
      if(minFactor[i]==-1){
        for(ll j=i;j<=sz_;j+=i){
          minFactor[j]=i;
        }
      }
    }
  }

  map<ll,int> OSAprime(ll n){
    map<ll,int> ret;
    while(n!=1){
      int cnt=0;
      int prime=minFactor[n];
      while(minFactor[n]==prime){
        cnt++;
        n/=prime;
      }
      ret[prime]+=cnt;
    }

    return ret;
  }
};

ll gcd(ll a,ll b){
  if (a%b == 0){
    return(b);
  }else{
    return(gcd(b, a%b));
  }
}
ll lcm(ll a,ll b){
  return a * b / gcd(a, b);
}


int main()
{
  ll N;
  cin >> N;
  vector<ll> A(N);
  REP(i, N) cin >> A[i];
  
  ll x=A[0];
  REP(i,N-1){
    x=gcd(x,A[i+1]);
  }

  if(x!=1){
    cout << "not coprime" << endl;
  }else{
    set<ll> st;
    int flag=0;
    OSA_K Osa(1000000);
    map<ll,int> mp;
    REP(i,N){
      for(auto x:Osa.OSAprime(A[i])){
        if(mp[x.fi]!=0){
          flag=1;
          break;
        }
        mp[x.fi]++;
      }
    }

    if(flag==1){
      cout << "setwise coprime" << endl;
    }else{
      cout << "pairwise coprime" << endl;
    }
  }
}