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
long long dp[310];
  
int main()
{
  int N;
  cin >> N;
  vector<int> A(3);
  vector<bool> B(310);
  REP(i, 3){
    cin >> A[i];
    B[A[i]]=true;
  }
  REP(i,310){
    dp[i]=INF;
  }
  dp[0]=0;
  REP(i,310){
    if(B[i+1]!=true){
      chmin(dp[i+1],dp[i]+1);
    }
    if(B[i+2]!=true){
      chmin(dp[i+2],dp[i]+1);
    }
    if(B[i+3]!=true){
      chmin(dp[i+3],dp[i]+1);
    }
  }

  if(dp[N]>100){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }
}
