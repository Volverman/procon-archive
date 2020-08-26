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
  INT(H);
  INT(W);
  vector<vector<int>> A(H,vector<int>(W));
  REP(i, H){
    REP(j, W){
      cin >> A.at(i).at(j);
      if((i+j)%2==0){
        A[i][j]=-A[i][j];
      }
    }
  }
  vector<vector<int>> imos(H+1,vector<int>(W+1,0));
  REP(i,H){
    int sum = 0;
    REP(j,W){
      sum+=A[i][j];
      imos[i+1][j+1]=sum;
    }
  }
  REP(i,W){
    int sum = 0;
    REP(j,H){
      sum+=imos[j+1][i+1];
      imos[j+1][i+1]=sum;
    }
  }

  // REP(i,H+1){
  //   REP(j,W+1){
  //     cout << imos[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  ll MAX = 0;
  REP2(i,1,H){
    REP2(j,1,W){
      REP2(k,i,H){
        REP2(l,j,W){
          if(imos[i-1][j-1]+imos[k][l]-imos[i-1][l]-imos[k][j-1]==0){
            MAX=max(MAX,(ll)((k-(i-1))*(l-(j-1))));
          }
        }
      }
    }
  }

  cout << MAX << endl;
}