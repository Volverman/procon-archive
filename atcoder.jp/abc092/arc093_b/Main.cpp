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
  INT(A);
  INT(B);
  cout << 100 << " " << 100 << endl;
  vector<vector<int>> ans(100,vector<int>(100,0));
  REP2(i,50,99){
    REP(j,100){
      ans[i][j]=1;
    }
  }

  int cnt=0;
  int flag=0;
  REP(i,49){
    REP(j,100){
      if(cnt==B-1){
        flag=1;
        break;
      }
      if(i%2==0&&j%2==0){
        ans[i][j]=1;
        cnt++;
      }
    }
    if(flag==1){
      break;
    }
  }
  
  cnt=0;
  flag=0;
  REP2(i,51,100){
    REP(j,100){
      if(cnt==A-1){
        flag=1;
        break;
      }
      if(i%2==1&&j%2==0){
        ans[i][j]=0;
        cnt++;
      }
    }
    if(flag==1){
      break;
    }
  }

  REP(i,100){
    REP(j,100){
      if(ans[i][j]==0){
        cout << ".";
      }else{
        cout << "#";
      }
    }
    cout << endl;
  }
}