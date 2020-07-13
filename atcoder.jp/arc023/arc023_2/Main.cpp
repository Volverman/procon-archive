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
  int R,C,D;
  cin >> R >> C >> D;
  vector<vector<int>> A(R,vector<int>(C));
  REP(i, R){
    REP(j, C){
      cin >> A.at(i).at(j);
    }
  }
  
  int max1=0;
  int max2=0;
  REP(i,R){
    REP(j,C){
      if((i+j)%2==0&&i+j<=D){
        max1=max(max1,A[i][j]);
      }else if((i+j)%2==1&&i+j<=D){
        max2=max(max2,A[i][j]);
      }
    }
  }

  if(D%2==0){
    cout << max1 << endl;
  }else{
    cout << max2 << endl;
  }
}