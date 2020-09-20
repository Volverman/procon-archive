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

bool f(vector<string> A,ll x,ll T){
  int H=sz(A);
  int W=sz(A[0]);
  int S,G;
  REP(i,H){
    REP(j,W){
      if(A[i][j]=='S'){
        S=i*W+j;
      }
      if(A[i][j]=='G'){
        G=i*W+j;
      }
    }
  }
  graph gr(H*W);
  REP(i,H){
    REP(j,W){
      REP(k,4){
        int nvy=i+dy[k];
        int nvx=j+dx[k];
        if(nvy<0||nvy>H-1||nvx<0||nvx>W-1) continue;
        int v=i*W+j;
        int nv=nvy*W+nvx;
        if(A[nvy][nvx]=='.'||A[nvy][nvx]=='S'||A[nvy][nvx]=='G'){
          gr.add_edge(v,nv,1);
        }else{
          gr.add_edge(v,nv,x);
        }
      }
    }
  }

  gr.dijkstra(S);
  return T>=gr.d[G];
}

int main()
{
  INT(H);
  INT(W);
  ll T;
  cin >> T;
  vector<string> A(H);
  REP(i, H) cin >> A[i];
  ll ok=1;
  ll ng=INF;
  while(abs(ng-ok)>1){
    ll mid=(ok+ng)/2;
    if(f(A,mid,T)){
      ok=mid;
    }else{
      ng=mid;
    }
  }

  cout << ok << endl;
}
