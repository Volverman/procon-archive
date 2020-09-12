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
  ll N;
  cin >> N;
  vector<P> A(N-1);
  vector<vector<ll>> List(N,vector<ll> ());
  REP(i,N-1){
    cin >> A[i].first >> A[i].second;
    A[i].fi--;
    A[i].se--;
    List[A[i].fi].push_back(A[i].se);
    List[A[i].se].push_back(A[i].fi);
  }
  
  queue<ll> que;
  que.push(0);
  vector<ll> dist(N,-1);
  dist[0]=0;
  while(!que.empty()){
    ll v=que.front();
    que.pop();
    for(auto nv:List[v]){
      if(dist[nv]!=-1) continue;
      que.push(nv);
      dist[nv]=dist[v]+1;
    }
  }

  queue<ll> que2;
  que2.push(N-1);
  ll snuke;
  ll fennec;
  while(!que2.empty()){
    ll v=que2.front();
    que2.pop();
    for(auto nv:List[v]){
      if(dist[nv]!=dist[v]-1) continue;
      que2.push(nv); 
      if(dist[nv]==dist[N-1]/2){
        fennec=nv;
        snuke=v;
      }
    }
  }

  queue<ll> que3;
  que3.push(fennec);
  vector<ll> dist3(N,-1);
  dist3[fennec]=0;
  ll cntf=1;
  while(!que3.empty()){
    ll v=que3.front();
    que3.pop();
    for(auto nv:List[v]){
      if(dist3[nv]!=-1||nv==snuke) continue;
      que3.push(nv);
      dist3[nv]=0;
      cntf++;
    }
  }

  if(cntf>N-cntf){
    cout << "Fennec" << endl;
  }else{
    cout << "Snuke" << endl;
  }
}
