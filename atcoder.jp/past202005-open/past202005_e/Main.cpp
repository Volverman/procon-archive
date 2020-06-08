#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  int N,M,Q;
  cin >> N >> M >> Q;

  vector<vector<int>> graph(N);
  REP(i,M){
    int v1,v2;
    cin >> v1 >> v2;
    graph.at(v1-1).push_back(v2-1);
    graph.at(v2-1).push_back(v1-1);
  }

  vector<int> c(N);
  REP(i, N) cin >> c[i];
  
  vector<int> ans;
  REP(i,Q){
    int q;
    cin >> q;
    if(q==1){
      int x;
      cin >> x;
      ans.push_back(c[x-1]);
      for(auto t:graph.at(x-1)){
        c[t]=c[x-1];
      }
    }else{
      int x, y;
      cin >> x >> y;
      ans.push_back(c[x-1]);
      c[x-1]=y;
    }
  }

  for(auto s:ans){
    cout << s << endl;
  }
}