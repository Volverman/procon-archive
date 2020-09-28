#include <bits/stdc++.h>
#include <atcoder/all>
typedef long long ll;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REP2(i, a, b) for(int i = a;i <= b;i++)
#define REPR(i, a, b) for(int i = a; i >= b; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2000000000
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
using namespace atcoder;
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
  INT(K);
  vector<vector<int>> A(N,vector<int>(N));
  REP(i, N){
    REP(j, N){
      cin >> A.at(i).at(j);
    }
  }
  mcf_graph<int,ll> gr(2*N+2);
  int s=2*N,t=2*N+1;
  gr.add_edge(s,t,N*K,INF);
  REP(i,N){
    gr.add_edge(s,i,K,0);
    gr.add_edge(i+N,t,K,0);
  }
  REP(i,N){
    REP(j,N){
      gr.add_edge(i,j+N,1,INF-A[i][j]);
    }
  }
  cout << 1LL*N*K*INF-gr.flow(s,t,N*K).se << endl;
  auto edges=gr.edges();
  vector<string> ans(N);
  REP(i,N){
    REP(j,N){
      ans[i]+=".";
    }
  }
  for(auto x:edges){
    if(x.from==s||x.to==t||x.flow==0)continue;
    ans[x.from][x.to-N]='X';
  }
  REP(i,N){
    cout << ans[i] << endl;
  }
}