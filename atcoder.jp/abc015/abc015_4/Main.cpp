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

ll dp[55][55][20010]={0};//i番目まで見てj枚使った時に幅がkになる最大の重要度

int main()
{
  INT(W);//<10000
  INT(N);//<50
  INT(K);
  vector<P> A(N);
  REP(i,N) cin >> A[i].first >> A[i].second;
  
  REP(i,N){
    REP(j,K+1){
      REP(k,W+1){
        chmax(dp[i+1][j+1][k+A[i].fi],dp[i][j][k]+A[i].se);
        chmax(dp[i+1][j][k],dp[i][j][k]);
      }
    }
  }

  cout << dp[N][K][W] << endl;
}