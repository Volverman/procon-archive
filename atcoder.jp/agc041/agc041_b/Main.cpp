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
ll N,M,V,p;

bool f(ll x,vector<ll> A){
  vector<ll> B=A;
  if(x<=p){
    return 1;
  }else{
    B[N-x]+=M;
    ll cnt = 0;
    REP(i,N){
      if(B[i]>B[N-x]){
        cnt++;
      }
    }
    if(cnt>=p){
      return 0;
    }else{
      ll sum = M;
      REPR(i,N-1,0){
        if(i==N-x)continue;
        if(B[i]>B[N-x]){
          sum+=M;
        }else if(B[i]<=B[N-x]){
          if(B[i]+M>B[N-x]&&cnt+1<p){
            sum+=M;
            cnt++;
          }else{
            sum+=min(B[N-x]-B[i],M);
          }
        }
      }
      if(sum>=M*V){
        return 1;
      }else{
        return 0;
      }
    }
  }
}

int main()
{
  cin >> N >> M >> V >> p;
  vector<ll> A(N);
  REP(i, N) cin >> A[i];
  sort(ALL(A));
  ll ok=0;
  ll ng=N+1;
  while(abs(ok-ng)>1){
    int mid=(ok+ng)/2;
    if(f(mid,A)){
      ok=mid;
    }else{
      ng=mid;
    }
  }

  cout << ok << endl;
}
