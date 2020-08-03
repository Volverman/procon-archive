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

int main()
{
  INT(N);
  string S;
  cin >> S;
  int MAX = 0;
  FOR(i,1,sz(S)){
    string s1=S.substr(0,i),s2=S.substr(i,sz(S)-i);
    int dp[sz(s1)][sz(s2)];
    REP(j,sz(s1)){
      REP(k,sz(s2)){
        dp[j][k]=0;
      }
    }
    int flag = 0;
    REP(j,sz(s1)){
      if(s1[j]==s2[0]){
        flag=1;
      }
      if(flag==1){
        dp[j][0]=1;
      }
    }
    int flag2=0;
    REP(j,sz(s2)){
      if(s2[j]==s1[0]){
        flag2=1;
      }
      if(flag2==1){
        dp[0][j]=1;
      }
    }

    FOR(j,1,sz(s1)){
      FOR(k,1,sz(s2)){
        if(s1[j]==s2[k]){
          dp[j][k]=dp[j-1][k-1]+1;
        }else{
          dp[j][k]=max(dp[j-1][k],dp[j][k-1]);
        }
      }
    }

    MAX=max(MAX,dp[sz(s1)-1][sz(s2)-1]);
  }

  cout << N-MAX*2 << endl;
}