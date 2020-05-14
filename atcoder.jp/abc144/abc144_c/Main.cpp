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
  ll N;
  cin >> N;
  long double A = N;
  long double x = sqrtl(A);
  int b = 1;
  for(int i = 1;i<=x;i++){
    if(N%i == 0){
      b = max(i,b);
    }
  }

  cout << b + N/b -2 << endl;
}