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
struct edge{ll to, cost;};
typedef pair<ll,ll> P;
struct graph{
  ll V;
  vector<vector<edge> > G;
  vector<ll> d;

  graph(ll n){
    init(n);
  }

  void init(ll n){
    V = n;
    G.clear();
    G.resize(V);
    d.resize(V);
    REP(i,V){
      d[i] = INF;
    }
  }

  void add_edge(ll s, ll t, ll cost){
    edge e;
    e.to = t, e.cost = cost;
    G[s].push_back(e);
  }

  void dijkstra(ll s){
    REP(i,V){
      d[i] = INF;
    }
    d[s] = 0;
    priority_queue<P,vector<P>, greater<P> > que;
    que.push(P(0,s));
    while(!que.empty()){
      P p = que.top(); que.pop();
      ll v = p.second;
      if(d[v]<p.first) continue;
      for(auto e : G[v]){
        if(d[e.to]>d[v]+e.cost){
          d[e.to] = d[v]+e.cost;
          que.push(P(d[e.to],e.to));
        }
      }
    }
  }
};

int main()
{
  int N,M;
  cin >> N >> M;
  graph gr(N);
  vector<vector<int>> A(M,vector<int>(3));
  vector<int> start;
  REP(i, M){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
    A[i][0]--;
    A[i][1]--;
    if(A[i][0]==0||A[i][1]==0){
      start.push_back(i);
    }
  }

  // REP(i,sz(start)){
  //   cout << start[i] << endl;
  // }

  ll MIN=INF;
  for(auto x:start){
    gr.init(N);
    REP(i,M){
      if(i!=x){
        gr.add_edge(A[i][0],A[i][1],A[i][2]);
        gr.add_edge(A[i][1],A[i][0],A[i][2]);
      }
    }
    gr.dijkstra(0);
    if(A[x][0]==0){
      MIN=min(MIN,gr.d[A[x][1]]+A[x][2]);
    }else{
      MIN=min(MIN,gr.d[A[x][0]]+A[x][2]);
    }
  }

  if(MIN<1000000000){
    cout << MIN << endl;
  }else{
    cout << -1 << endl;
  }
}
