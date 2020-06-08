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
  int N, M, Q;
  cin >> N >> M >> Q;

  vector<vector<int>> graph(N);
  vector<int> score(M,N);
  vector<int> ans;
  REP(i,Q){
    int x;
    cin >> x;
    if(x==2){
      int n,m;
      cin >> n >> m;
      graph.at(n-1).push_back(m-1);
      score.at(m-1)--;
    }else{
      int n;
      cin >> n;

      int sum = 0;
      for(auto z:graph.at(n-1)){
        sum+=score.at(z);
      }
      ans.push_back(sum);
    }
  }
  for(auto t:ans){
    cout << t << endl;
  }
}