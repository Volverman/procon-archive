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
  
  int a = A.at(0).at(0);
  int b = A.at(0).at(1);
  int flag = 0;
  REP(i,M){
    if(A.at(i).at(0)>b){
      cout << 0 << endl;
      flag = 1;
      break;
    }else{
      a = max(a,A.at(i).at(0));
      b = min(b,A.at(i).at(1));
    }
  }
  if(flag == 0){
    cout << b-a+1 << endl;
  }
}