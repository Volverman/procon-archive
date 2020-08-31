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
const int dx[]{0, 1, 1}, dy[]{1, 0, 1};
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
  INT(H);
  INT(W);
  vector<string> A(H+1);
  REP(i, H){
    cin >> A[i];
    A[i].push_back('#');
  }
  REP(i,W+1){
    A[H].push_back('#');
  }

  // REP(i,H+1){
  //   REP(j,W+1){
  //     cout << A[i][j];
  //   }
  //   cout << endl;
  // }
  
  vector<vector<int>> dp(H,vector<int> (W,-1));
  REP(i,H){
    REP(j,W){
      if(A[i][j+1]=='#'&&A[i+1][j]=='#'&&A[i+1][j+1]=='#'&&A[i][j]!='#'){
        dp[i][j]=0;
      }
    }
  }

  REPR(i,H-1,0){
    REPR(j,W-1,0){
      if(i==H-1&&j==W-1) continue;
      if(A[i][j]=='#') continue;
      if(i==H-1){
        if(dp[i][j+1]==0){
          dp[i][j]=1;
        }else{
          dp[i][j]=0;
        }
      }else if(j==W-1){
        if(dp[i+1][j]==0){
          dp[i][j]=1;
        }else{
          dp[i][j]=0;
        }
      }else{
        int flag = 0;
        REP(k,3){
          int y=i+dy[k];
          int x=j+dx[k];
          if(A[y][x]=='#') continue;
          if(dp[y][x]==0){
            flag=1;
          }
        }
        if(flag==1){
          dp[i][j]=1;
        }else{
          dp[i][j]=0;
        }
      }
    }
  }

  // REP(i,H){
  //   REP(j,W){
  //     if(dp[i][j]==1){
  //       cout << "o";
  //     }else{
  //       cout << "x";
  //     }
  //   }
  //   cout << endl;
  // }

  if(dp[0][0]==0){
    cout << "Second" << endl;
  }else{
    cout << "First" << endl;
  }
}