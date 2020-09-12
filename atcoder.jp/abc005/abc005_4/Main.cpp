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
  vector<vector<int>> A(N,vector<int>(N));
  REP(i, N){
    REP(j, N){
      cin >> A.at(i).at(j);
    }
  }
  INT(Q);
  vector<int> B(Q);
  REP(i, Q) cin >> B[i];
  vector<vector<int>> imos(N+1,vector<int>(N+1,0));
  REP(i,N){
    REP(j,N){
      imos[i+1][j+1]=A[i][j];
    }
  }

  REP2(i,1,N){
    REP2(j,1,N){
      imos[i][j]+=imos[i][j-1];
    }
  }

  REP2(i,1,N){
    REP2(j,1,N){
      imos[j][i]+=imos[j-1][i];
    }
  }

  // REP(i,N+1){
  //   REP(j,N+1){
  //     cout << imos[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  vector<int> ans(N*N+1,0);
  REP(i,N){
    REP(j,N){
      //左上
      REP(k,N){
        REP(l,N){
          //右下
          if(i<=k&&j<=l){
            int sum = imos[k+1][l+1]-imos[k+1][j]-imos[i][l+1]+imos[i][j];
            chmax(ans[(k+1-i)*(l+1-j)],sum);
          }
        }
      }
    }
  }

  REP(i,sz(ans)-1){
    chmax(ans[i+1],ans[i]);
  }

  REP(i,Q){
    cout << ans[B[i]] << endl;
  }
}
