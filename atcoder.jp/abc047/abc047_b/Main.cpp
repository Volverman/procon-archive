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
  int W,H,N;
  cin >> W >> H >>N;

  vector<vector<int>> A(N,vector<int>(3));
  REP(i, N){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
  }
  
  int MAX_X=W,MIN_X=0,MAX_Y=H,MIN_Y=0;

  REP(i,N){
    if(A.at(i).at(2)==1){
      MIN_X=max(MIN_X,A.at(i).at(0));
    }else if(A.at(i).at(2)==2){
      MAX_X=min(MAX_X,A.at(i).at(0));
    }else if(A.at(i).at(2)==3){
      MIN_Y=max(MIN_Y,A.at(i).at(1));
    }else if(A.at(i).at(2)==4){
      MAX_Y=min(MAX_Y,A.at(i).at(1));
    }
  }

  cout << max(0,MAX_X-MIN_X)*max(0,MAX_Y-MIN_Y) << endl;
}