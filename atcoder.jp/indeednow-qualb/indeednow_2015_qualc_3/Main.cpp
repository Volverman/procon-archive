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
  vector<P> A(N-1);
  vi2 List(N,vi());
  REP(i,N-1){
    cin >> A[i].first >> A[i].second;
    A[i].fi--;
    A[i].se--;
    List[A[i].fi].eb(A[i].se);
    List[A[i].se].eb(A[i].fi);
  }
  
  priority_queue<int,vi,greater<int>> pq;
  pq.push(0);
  vi dist(N,-1);
  dist[0]=0;
  vi ans;
  while(!pq.empty()){
    int v = pq.top();
    ans.eb(v);
    pq.pop();
    for(auto nv:List[v]){
      if(dist[nv]!=-1) continue;
      pq.push(nv);
      dist[nv]=0;
    }
  }
  REP(i,sz(ans)){
    cout << ans[i]+1;
    if(i!=sz(ans)-1){
      cout << " ";
    }
  }
  cout << endl;
}