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
  INT(Cy);
  INT(Cx);
  INT(Dy);
  INT(Dx);
  Cy--;
  Cx--;
  Dy--;
  Dx--;
  vector<string> A(H);
  REP(i, H){
    cin >> A.at(i);
  }

  deque<P> deq;
  deq.push_back({Cy,Cx});
  vector<vector<int>> dist(H,vector<int> (W,INF));
  dist[Cy][Cx]=0;
  while(!deq.empty()){
    int vy=deq.front().first;
    int vx=deq.front().second;
    deq.pop_front();
    REP(i,4){
      int nvy=vy+dy[i];
      int nvx=vx+dx[i];
      if(nvy<0||nvx<0||nvy>H-1||nvx>W-1||A[nvy][nvx]=='#') continue;
      if(dist[nvy][nvx]>dist[vy][vx]){
        dist[nvy][nvx]=dist[vy][vx];
        deq.push_front({nvy,nvx});
      }
    }
    REP2(i,-2,2){
      REP2(j,-2,2){
        int nvy=vy+i;
        int nvx=vx+j;
        if(nvy<0||nvx<0||nvy>H-1||nvx>W-1||A[nvy][nvx]=='#') continue;
        if(dist[nvy][nvx]>dist[vy][vx]+1){
          dist[nvy][nvx]=dist[vy][vx]+1;
          deq.push_back({nvy,nvx});
        }
      }
    }
  }

  // REP(i,H){
  //   REP(j,W){
  //     cout << dist[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  if(dist[Dy][Dx]==INF){
    cout << -1 << endl;
  }else{
    cout << dist[Dy][Dx] << endl;
  }
}