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

  vector<int> B(N-1);
  REP(i, N-1) cin >> B[i];
  
  vector<int> A(N);

  for(int i = N-2;i > 0;i--){
    if(B.at(i)>=B.at(i-1)){
      A.at(i) = B.at(i-1);
    }else{
      A.at(i) = B.at(i);
    }
  }
  A.at(0) = B.at(0);
  A.at(N-1) = B.at(N-2);

  int sum = 0;
  REP(i,N){
    sum+=A.at(i);
  }

  cout << sum << endl;
}