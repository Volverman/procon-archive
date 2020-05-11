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

  int flag = 0;
  REP(i,1251){
    int a = i * 108 / 100 - i;
    int b = i * 110 / 100 - i;
    if(a == A&&b == B){
      cout << i << endl;
      flag = 1;
      break;
    }
  }

  if(flag == 0){
    cout << -1 << endl;
  }
}