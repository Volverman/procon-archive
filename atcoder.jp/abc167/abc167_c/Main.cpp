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

void binary(vector<int>& A,int N){
  for(int i=0;N>0;i++){
    A.at(i) = N%2;
    N=N/2;
  }
}

int main()
{
  int N, M, X;
  cin >> N >> M >> X;

  vector<int> C(N);
  vector<vector<int>> A(N,vector<int>(M));
  REP(i, N){
    cin >> C[i];
    REP(j, M){
      cin >> A.at(i).at(j);
    }
  }
  
  int MIN = INF;
  int flag2 = 0;
  FOR(i,1,pow(2,N)){
    vector<int> B(N,0);
    binary(B,i);
    int sumC=0;
    vector<int> sumA(M,0);
    REP(j,N){
      sumC+=B.at(j)*C.at(j);
    }
    REP(j,M){
      REP(k,N){
        sumA.at(j)+=A.at(k).at(j)*B.at(k);
      }
    }
    int flag = 0;
    REP(j,M){
      if(sumA.at(j)<X){
        flag = 1;
      }
    }
    if(flag == 1){
      continue;
    }else{
      MIN = min(MIN,sumC);
      flag2 = 1;
    }
  }
  if(flag2 == 1){
    cout << MIN << endl;
  }else{
    cout << -1 << endl;
  }
}