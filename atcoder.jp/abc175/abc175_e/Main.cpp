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
ll dp[3010][3010][5]={0};
int main()
{
  ll R,C,K;
  cin >> R >> C >> K;
  vector<vector<ll>> vec(R,vector<ll>(C,0));
  vector<vector<ll>> A(K,vector<ll>(3));
  REP(i, K){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
    A[i][0]--;
    A[i][1]--;
    vec[A[i][0]][A[i][1]]=A[i][2];
  }

  dp[0][0][1]=vec[0][0];
  REP(i,R){
    REP(j,C){
      REP(k,4){
        if(i!=R-1){
          if(vec[i+1][j]!=0){
            chmax(dp[i+1][j][1],dp[i][j][k]+vec[i+1][j]);
          }
          chmax(dp[i+1][j][0],dp[i][j][k]);
        }
        if(j!=C-1){
          if(k!=3&&vec[i][j+1]!=0){
            chmax(dp[i][j+1][k+1],dp[i][j][k]+vec[i][j+1]);
          }
          chmax(dp[i][j+1][k],dp[i][j][k]);
        }
      }
    }
  }

  // REP(k,4){
  //   REP(i,R){
  //     REP(j,C){
  //       cout << dp[i][j][k] << " ";
  //     }
  //     cout << endl;
  //   }
  // }

  cout << max(max(dp[R-1][C-1][0],dp[R-1][C-1][1]),max(dp[R-1][C-1][2],dp[R-1][C-1][3])) << endl;
}
