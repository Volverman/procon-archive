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
  vector<vector<int>> A(3,vector<int>(3));
  REP(i, 3){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
  }
  int N;
  cin >> N;
  vector<int> B(N);
  REP(i, N) cin >> B[i];
  
  vector<vector<int>> C(3,vector<int>(3,0));
  
  
  REP(i,N){
    REP(j,3){
      REP(k,3){
        if(A.at(j).at(k) == B.at(i)){
          C.at(j).at(k) = 1;
        }
      }
    }
  }

  if(C.at(0).at(0) == 1&&C.at(0).at(1) == 1&&C.at(0).at(2) == 1
  || C.at(1).at(0) == 1&&C.at(1).at(1) == 1&&C.at(1).at(2) == 1
  || C.at(2).at(0) == 1&&C.at(2).at(1) == 1&&C.at(2).at(2) == 1
  || C.at(0).at(0) == 1&&C.at(1).at(0) == 1&&C.at(2).at(0) == 1
  || C.at(0).at(1) == 1&&C.at(1).at(1) == 1&&C.at(2).at(1) == 1
  || C.at(0).at(2) == 1&&C.at(1).at(2) == 1&&C.at(2).at(2) == 1
  || C.at(0).at(0) == 1&&C.at(1).at(1) == 1&&C.at(2).at(2) == 1
  || C.at(0).at(2) == 1&&C.at(1).at(1) == 1&&C.at(2).at(0) == 1){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}