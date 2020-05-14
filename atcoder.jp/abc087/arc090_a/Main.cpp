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
  int N;
  cin >> N;
  vector<vector<int>> A(2,vector<int>(N));
  REP(i, 2){
    REP(j, N){
      cin >> A.at(i).at(j);
    }
  }

  int MAX = 0;
  REP(i,N){
    int cnt = 0;
    REP(j,N){
      if(j<=i){
        cnt+=A.at(0).at(j);
      }
      if(j>=i){
        cnt+=A.at(1).at(j);
      }
    }
    MAX = max(MAX,cnt);
  }

  cout << MAX << endl;
}