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
int main()
{
  ll N,M;
  cin >> N >> M;
  vector<vector<ll>> A(M,vector<ll>(3));
  vector<vector<edge>> G(N);
  REP(i, M){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
    A[i][0]--;
    A[i][1]--;
    G[A[i][0]].push_back(edge{A[i][1],A[i][2]});
    G[A[i][1]].push_back(edge{A[i][0],-A[i][2]});
  }
  
  vector<ll> dist(N,-INF);
  ll now=0;
  int flag = 0;
  REP(i,N){
    if(dist[i]!=-INF) continue;
    queue<ll> que;
    que.push(i);
    dist[i]=0;
    while(!que.empty()){
      ll v=que.front();
      que.pop();
      for(auto x:G[v]){
        if(dist[x.to]!=-INF&&dist[x.to]-dist[v]!=x.cost){
          flag=1;
        }
        if(dist[x.to]==-INF){
          dist[x.to]=dist[v]+x.cost;
          que.push(x.to);
        }
      }
    }
  }

  if(flag==1){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl; 
  }
}
