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
  vector<P> A(N);
  REP(i,N){
    cin >> A[i].first >> A[i].second;
    A[i].fi--;
    A[i].se--;
  }

  vector<vector<int>> vec(100000,vector<int> (3,0));
  REP(i,N){
    vec[A[i].fi][A[i].se]++;
  }

  // REP(i,10){
  //   REP(j,3){
  //     cout << vec[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  vector<vector<vector<int>>> ans(100000,vector<vector<int>> (3,vector<int> (3)));
  int sumwin = 0;
  REP(i,100000){
    int cnt = 0;
    REP(j,3){
      cnt+=vec[i][j];
      int win=sumwin+vec[i][(j+1)%3];
      int draw=vec[i][j]-1;
      int lose=N-1-win-draw;
      ans[i][j][0]=win;
      ans[i][j][1]=lose;
      ans[i][j][2]=draw;
    }
    sumwin+=cnt;
  }

  REP(i,N){
    cout << ans[A[i].fi][A[i].se][0] << " " << ans[A[i].fi][A[i].se][1] << " " << ans[A[i].fi][A[i].se][2] << endl;
  }
}