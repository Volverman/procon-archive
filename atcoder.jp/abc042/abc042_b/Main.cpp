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
  int N, L;
  cin >> N >> L;

  vector<string> A(N);
  REP(i, N) cin >> A[i];

  sort(ALL(A));

  string B = "";

  REP(i,N){
    B = B + A.at(i);
  }
  
  cout << B << endl;
}