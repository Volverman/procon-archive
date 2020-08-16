#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REP2(i, a, b) for(int i = a;i <= b;i++)
#define REPR(i, a, b) for(int i = a; i >= b; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 1e18
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

int main()
{
  ll N,K;
  cin >> N >> K;
  vector<ll> A(N);
  REP(i, N){
    cin >> A[i];
    A[i]--;
  }
  vector<ll> C(N);
  ll MAXC = -INF;
  REP(i, N){
    cin >> C[i];
  }
  
  ll MAX=-INF;
  REP(i,N){
    vector<ll> vec;
    int now = i;
    ll sum = 0;
    while(1){
      now=A[now];
      vec.push_back(C[now]);
      sum+=C[now];
      if(now==i) break;
    }

    ll nowscore=0;
    REP(j,sz(vec)){
      nowscore+=vec[j];
      ll t = nowscore;
      if(j+1>K) break;
      if(sum>0){
        t+=((K-(j+1))/sz(vec))*sum;
      }
      MAX=max(MAX,t);
    }
  }
  cout << MAX << endl;
}