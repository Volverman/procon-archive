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
  vector<ll> prever;

  graph(ll n){
    init(n);
  }

  void init(ll n){
    V = n;
    G.clear();
    G.resize(V);
    d.resize(V);
    prever.resize(V);
    REP(i,V){
      prever[i] = -1;
    }
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
          prever[e.to] = v;
          que.push(P(d[e.to],e.to));
        }
      }
    }
  }
};
int main()
{
  string f,l;
  cin >> f >> l;
  int N;
  cin >> N;
  vector<string> A(N+2);
  A[0]=f;
  REP2(i,1,N+1) cin >> A[i];
  A[N+1]=l;
  graph gr(N+2);
  REP(i,N+2){
    REP(j,N+2){
      if(i==j)continue;
      int cnt = 0;
      REP(k,sz(A[0])){
        if(A[i][k]!=A[j][k]){
          cnt++;
        }
      }
      if(cnt==1){
        gr.add_edge(i,j,1);
      }
    }
  }
  gr.dijkstra(0);
  // REP(i,N+2){
  //   cout << gr.d[i] << endl;
  // }
  if(f==l){
    cout << 0 << endl;
    cout << f << endl;
    cout << l << endl;
  }else if(gr.d[N+1]>1000000){
    cout << -1 << endl;
  }else{
    vector<int> ans;
    int t=N+1;
    for(;t!=-1;t=gr.prever[t]){
      ans.push_back(t);
    }
    reverse(ALL(ans));
    cout << sz(ans)-2 << endl;
    REP(i,sz(ans)){
      cout << A[ans[i]] << endl;
    }
  }
}
