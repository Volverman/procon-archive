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
  VEC(string,A,N);
  vector<ll> B;
  REP(i,N){
    int flag = 0;
    int cnt=0;
    string num;
    string point;
    REP(j,sz(A[i])){
      if(flag==0&&A[i][j]!='.'){
        num.push_back(A[i][j]);
      }
      if(A[i][j]=='.'){
        flag=1;
        continue;
      }else if(flag==1){
        point.push_back(A[i][j]);
      }
    }
    while(point.size()<=8){
      point.push_back('0');
    }
    if(point.size()>0){
      B.push_back(stol(num)*1000000000+stol(point));
    }else{
      B.push_back(stol(num)*1000000000);
    }
  }
  // REP(i,sz(B)){
  //   cout <<B[i] << endl;
  // }

  vector<P> C(sz(B));
  REP(i,sz(B)){
    C[i]=make_pair(0,0);
  }

  int dp[50][50]={0};
  REP(i,sz(B)){
    ll x = B[i];
    while(x%2==0){
      x/=2;
      C[i].fi++;
    }
    ll y = B[i];
    while(y%5==0){
      y/=5;
      C[i].se++;
    }
    // cout << C[i].fi <<" " << C[i].se<< endl;
    dp[C[i].fi+1][C[i].se+1]++;
    dp[C[i].fi+1][0]--;
    dp[0][C[i].se+1]--;
    dp[0][0]++;
  }
  REPR(i,48,0){
    REPR(j,48,0){
      dp[i][j]+=dp[i][j+1];
    }
  }
  REPR(i,48,0){
    REPR(j,48,0){
      dp[i][j]+=dp[i+1][j];
    }
  }
  // REP(i,30){
  //   REP(j,30){
  //     cout <<dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  ll ans = 0;
  REP(i,sz(B)){
    if(18-C[i].fi<=C[i].fi&&18-C[i].se<=C[i].se){
      ans+=dp[max((ll)0,18-C[i].fi)+1][max((ll)0,18-C[i].se)+1]-1;
    }else{
      ans+=dp[max((ll)0,18-C[i].fi)+1][max((ll)0,18-C[i].se)+1];
    }
  }

  cout << ans/2 << endl;
}