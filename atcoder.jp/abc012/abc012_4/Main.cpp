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
  ll N,M;
  cin >> N >> M;
  ll dp[N][N];
  REP(i,N){
    REP(j,N){
      if(i==j){
        dp[i][j]=0;
      }else{
        dp[i][j]=INF;
      }
    }
  }
  vector<vector<ll>> A(M,vector<ll>(3));
  REP(i, M){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
    dp[A.at(i).at(0)-1][A.at(i).at(1)-1]=A.at(i).at(2);
    dp[A.at(i).at(1)-1][A.at(i).at(0)-1]=A.at(i).at(2);
  }

  REP(i,N){
    REP(j,N){
      REP(k,N){
        chmin(dp[j][k],dp[j][i]+dp[i][k]);
        chmin(dp[k][j],dp[k][i]+dp[i][j]);
      }
    }
  }

  ll MIN=INF;
  ll ans=0;
  REP(i,N){
    ll MAX = 0;
    REP(j,N){
      chmax(MAX,dp[i][j]);
    }
    if(MAX<MIN){
      chmin(MIN,MAX);
    }
  }

  cout << MIN << endl;
}