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
  vector<int> T(N);
  REP(i, N) cin >> T[i];
  
  int M;
  cin >> M;

  vector<vector<int>> A(M,vector<int>(2));
  REP(i, M){
    REP(j, 2){
      cin >> A.at(i).at(j);
    }
  }
  
  vector<int> S(N);

  REP(i,M){
    REP(j,N){
      S.at(j) = T.at(j);
    }
    S.at(A.at(i).at(0)-1) = A.at(i).at(1);
    int sum = 0;
    REP(j,N){
      sum+=S.at(j);
    }
    cout << sum << endl;
  }
}