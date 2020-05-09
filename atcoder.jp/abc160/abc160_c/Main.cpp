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
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  
  int MAX = A.at(0) + (K - A.at(N-1));
  REP(i,N-1){
    MAX = max(MAX,(A.at(i+1)-A.at(i)));
  }
  cout << K - MAX << endl;
}