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
using P = pair<int,int>;
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

struct edge {
    int to;
    int cost;
};

int V, d[110],prever[110];
vector<edge> G[110]; // 隣接リスト表現

void dijkstra(int s) {
  fill(d, d + V, INF);
  fill(prever, prever + V, -1);
  d[s] = 0;  // 始点sへの最短距離は0

  priority_queue<P, vector<P>, greater<P>> que;  // 距離が小さい順に取り出せるようgreater<P>を指定
  que.push(make_pair(0,s));
  while (!que.empty()) {
    P p = que.top();
    que.pop();
    int v = p.second;  // 更新した頂点の中で距離が最小の頂点v
    if (d[v] < p.first) {
      continue;
    }
    for (auto e : G[v]) {  // 頂点vから出る辺eを走査
      if(e.to==prever[v]) continue;
      if (d[e.to] > d[v] + e.cost) {
        d[e.to] = d[v] + e.cost;
        que.push(make_pair(d[e.to], e.to));
        prever[e.to]=v;
      }
    }
  }
}

int main()
{
  INT(n);
  INT(x);
  x--;
  VEC(int,h,n);
  vector<P> A(n-1);
  REP(i,n-1){
    cin >> A[i].first >> A[i].second;
    A[i].fi--;
    A[i].se--;
    edge e1 = {A[i].fi,1};
    edge e2 = {A[i].se,1};
    G[A[i].se].push_back(e1);
    G[A[i].fi].push_back(e2);
  }
  V=n;
  vector<bool> seen(n,false);
  int cnt = 0;
  seen[x]=true;

  REP(i,n){
    if(h[i]==1){
      dijkstra(i);
      int now = x;
      while(now!=i){
        now=prever[now];
        if(seen[now]==false){
          cnt++;
          seen[now]=true;
        }
      }
    }
  }
  cout << cnt*2 << endl;
}