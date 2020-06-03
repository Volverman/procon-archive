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
  int N, Q;
  cin >> N >> Q;
  vector<P> A(N-1);
  vector<vector<int>> C(N,vector<int>());
  REP(i,N-1){
    cin >> A[i].first >> A[i].second;
    A[i].first--;
    A[i].second--;
    C.at(A[i].first).push_back(A[i].second);
    C.at(A[i].second).push_back(A[i].first);
  }
  vector<P> B(Q);
  REP(i,Q){
    cin >> B[i].first >> B[i].second;
    B[i].first--;
  }
  vector<int> cnt(N,0);
  REP(i,Q){
    cnt[B[i].first]+=B[i].second;
  }

  queue<int> que;
  vector<int> dist(N,-1);
  dist[0]=0;
  que.push(0);
  while(!que.empty()){
    int v = que.front();
    que.pop();
    for(auto nv:C[v]){
      if(dist[nv]!=-1) continue;
      dist[nv]=dist[v]+1;
      cnt[nv]+=cnt[v];
      que.push(nv);
    }
  }
  

  REP(i,N){
    if(i!=N-1){
      cout << cnt[i] << " ";
    }else{
      cout << cnt[i];
    }
  }
  cout << endl;
}
