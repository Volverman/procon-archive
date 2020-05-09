#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
 
int main()
{
  int N, M, C;
  cin >> N >> M >> C;
  vector<int> B(M);
  REP(i, M) cin >> B[i];
  
  vector<vector<int>> A(N,vector<int>(M));
  REP(i, N){
    REP(j, M){
      cin >> A.at(i).at(j);
    }
  }
  
  int cnt = 0;
  REP(i,N){
    int sum = 0;
    REP(j,M){
      sum += A.at(i).at(j)*B.at(j);
    }
    if(sum + C > 0){
      cnt++;
    }
  }
  cout << cnt << endl;
}