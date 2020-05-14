#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
  
int main()
{
  int N;
  cin >> N;
  vector<vector<int>> B(N,vector<int>(3));
  REP(i, N){
    REP(j, 3){
      cin >> B.at(i).at(j);
    }
  }
  int flag = 0;
  if(N==1){
    REP(i,N){
      if((B.at(i).at(1)+B.at(i).at(2))%2!=B.at(i).at(0)%2||abs(B.at(i).at(1)+B.at(i).at(2))>B.at(i).at(0)){
        flag = 1;
      }
    }
  }else{
    vector<vector<int>> A(N-1,vector<int>(3));
    REP(i,N-1){
      REP(j,3){
        A.at(i).at(j) = B.at(i+1).at(j)-B.at(i).at(j);
      }
    }
    REP(i,N-1){
      if(max(A.at(i).at(1)+A.at(i).at(2),-1*(A.at(i).at(1)+A.at(i).at(2)))%2!=A.at(i).at(0)%2||max(A.at(i).at(1),-1*A.at(i).at(1))+max(A.at(i).at(2),-1*A.at(i).at(2))>A.at(i).at(0)){
        flag = 1;
      }
    }
  }

  if(flag == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}