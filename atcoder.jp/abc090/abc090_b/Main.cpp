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
  int A, B;
  cin >> A >> B;

  int a = A/100;
  int b = B/100;

  int cnt = b - a + 1;
  if(a*100+a/100+(a-(a/100*100))/10*10 < A){
    cnt--;
  }
  if(b*100+b/100+(b-(b/100*100))/10*10 > B){
    cnt--;
  }
  cout << cnt << endl;
}