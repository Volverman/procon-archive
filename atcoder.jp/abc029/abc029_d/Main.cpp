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

unsigned GetDigit(unsigned num){
  return to_string(num).length();
}
ll dp[15];
ll dfs(ll x){
  if(GetDigit(x)==1){
    if(x==0){
      return 0;
    }else{
      return 1;
    }
  }
  int top = x/(ll)pow(10,GetDigit(x)-1);
  ll ret=top*dp[GetDigit(x)-1];
  if(top==1){
    ret+=x%(ll)pow(10,GetDigit(x)-1)+1;
  }else{
    ret+=pow(10,GetDigit(x)-1);
  }
  ret+=dfs(x%(ll)pow(10,GetDigit(x)-1));
  return ret;
}

int main()
{
  ll x;
  cin >> x;
  dp[1]=1;
  FOR(i,1,10){
    dp[i+1]=dp[i]*10+pow(10,i);
  }

  cout << dfs(x) << endl;
}