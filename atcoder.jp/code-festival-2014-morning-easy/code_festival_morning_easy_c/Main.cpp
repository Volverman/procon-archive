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

struct Edge {
  int to, cost;

};
typedef vector<vector<Edge> > AdjList;  // 隣接リストの型
AdjList graph;//グラフを頂点数で初期化すること。

vector<int> dist;

bool bellman_ford(int n, int s){
  dist = vector<int>(n,INF);
  dist[s] = 0;
  for(int i=0;i<n;i++){
    for(int v=0;v<n;v++){
      for(int k=0;k<graph[v].size();k++){
        Edge e = graph[v][k];
        if(dist[v] != INF && dist[e.to] > dist[v] + e.cost){
          dist[e.to] = dist[v] + e.cost;
          if(i == n-1) return true;
        }
      }
    }
  }
  return false;
}


int main()
{
  INT(n);
  INT(m);
  INT(s);
  INT(t);
  s--;
  t--;
  graph=AdjList(n);
  vector<vector<int>> A(m,vector<int>(3));
  REP(i, m){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
    A[i][0]--;
    A[i][1]--;
    graph[A[i][0]].push_back(Edge{A[i][1],A[i][2]});
    graph[A[i][1]].push_back(Edge{A[i][0],A[i][2]});
  }
  
  bellman_ford(n,s);
  vector<int> dists=dist;
  bellman_ford(n,t);
  vector<int> distt=dist;
  REP(i,n){
    if(dists[i]==distt[i]&&dists[i]<10000000){
      cout << i+1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}