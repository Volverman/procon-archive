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
  int N;
  cin >> N;

  vector<vector<int>> A(N,vector<int>());
  vector<int> B(N-1);
  REP(i, N-1){
    cin >> B[i];
    A.at(B[i]-1).push_back(i+1);
  }
  vector<int> C(N,1);
  REP(i,N){
    REP(j,N){
      if(A.at(j).size()!=0){
        int MAX=1,MIN=INF;
        for(auto x:A.at(j)){
          MAX=max(MAX,C.at(x));
          MIN=min(MIN,C.at(x));
        }
        C.at(j)=MAX+MIN+1;
      }else{
        C.at(j)=1;
      }
    }
  }

  cout << C.at(0) << endl;
}