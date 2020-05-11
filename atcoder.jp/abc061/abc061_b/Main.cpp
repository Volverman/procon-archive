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
  int N, M;
  cin >> N >> M;

  vector<vector<int>> A(M,vector<int>(2));
  REP(i, M){
    REP(j, 2){
      cin >> A.at(i).at(j);
    }
  }
  
  
  REP(i,N){
    int cnt = 0;
    REP(j,M){
      REP(k,2){
        if(A.at(j).at(k)-1 == i){
          cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
}