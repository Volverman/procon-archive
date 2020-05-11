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
  int N, D;
  cin >> N >> D;

  vector<vector<int>> A(N,vector<int>(D));
  REP(i, N){
    REP(j, D){
      cin >> A.at(i).at(j);
    }
  }
  
  int cnt = 0;
  REP(i,N){
    REP(j,i){
      double sum = 0;
      REP(k,D){
        sum += (A.at(i).at(k)-A.at(j).at(k))*(A.at(i).at(k)-A.at(j).at(k));
      }
      if((int)sqrt(sum) == sqrt(sum)){
        cnt++;
      }
    }
  }

  cout << cnt << endl;
}