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
  vector<int> a(N);
  REP(i, N) cin >> a[i];
  
  int MIN = INF;
  int sum = 0;
  REP(i,100){
    sum = 0;
    REP(j,N){
      sum += (a[j] - i)*(a[j] - i);
    }
    MIN = min(MIN,sum);
  }
  cout << MIN << endl;
}