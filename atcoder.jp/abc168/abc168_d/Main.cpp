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
  int N, M;
  cin >> N >> M;
  vector<int> graph[100100];
  vector<P> A(M);
  REP(i,M){
    cin >> A[i].first >> A[i].second;
    graph[A[i].first-1].push_back(A[i].second-1);
    graph[A[i].second-1].push_back(A[i].first-1);
  }
  
  vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
  vector<int> ans(N,0);
  queue<int> que;

  // 初期条件 (頂点 0 を初期ノードとする)
  dist[0] = 0;
  que.push(0); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
  while (!que.empty()) {
    int v = que.front(); // キューから先頭頂点を取り出す
    que.pop();

    // v から辿れる頂点をすべて調べる
    for (int nv : graph[v]) {
      if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない

      // 新たな白色頂点 nv について距離情報を更新してキューに追加する
      dist[nv] = dist[v] + 1;
      ans[nv]=v;
      que.push(nv);
    }
  }

  cout << "Yes" << endl;
  FOR(i,1,N){
    cout << ans[i]+1 << endl;
  }
}