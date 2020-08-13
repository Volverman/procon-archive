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
  vector<string> A(N);
  REP(i, N) cin >> A[i];
  
  
  int flag = 0;
  int MAX=1;
  REP(i,N){
    queue<int> que;
    que.push(i);
    vector<int> dist(N,-1);
    dist[i]=1;
    while(!que.empty()){
      int v = que.front();
      que.pop();
      REP(j,N){
        if(A[v][j]=='0') continue;
        if(dist[j]==dist[v]&&dist[j]!=-1){
          flag=1;
        }
        if(dist[j]!=-1) continue;
        que.push(j);
        dist[j]=dist[v]+1;
        MAX=max(MAX,dist[j]);
      }
    }
  }

  if(flag==0){
    cout << MAX << endl;
  }else{
    cout << -1 << endl;
  }
}