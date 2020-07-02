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
  int N,K;
  cin >> N >> K;
  vector<vector<int>> A(N,vector<int>(K));
  REP(i, N){
    REP(j, K){
      cin >> A.at(i).at(j);
    }
  }

  int flag = 0;
  REP(i,pow(K,N)){
    int x = i;
    int ans=0;
    REP(j,N){
      ans^=A.at(j).at(x%K);
      x/=K;
    }
    if(ans==0){
      flag = 1;
    }
  }

  if(flag==0){
    cout << "Nothing" << endl;
  }else{
    cout << "Found" << endl;
  }
}