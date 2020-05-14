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

  vector<int> A(N+1);
  REP(i, N+1) cin >> A[i];
  vector<int> B(N);
  REP(i, N) cin >> B[i];
  
  ll cnt = 0;
  REPR(i,N-1){
    if(B.at(i)>=A.at(i+1)){
      B.at(i)-=A.at(i+1);
      cnt+=A.at(i+1);
      cnt+=min(B.at(i),A.at(i));
      A.at(i)-=min(B.at(i),A.at(i));
    }else{
      cnt+=B.at(i);
    }
  }

  cout << cnt << endl;
}