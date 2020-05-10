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
  unsigned long long H;
  cin >> H;

  unsigned long long cnt = 0;
  while(H>1){
    H/=2;
    cnt++;
  }
  cnt++;

  unsigned long long a = 1;
  REP(i,cnt){
    a*=2;
  }
  cout << a - 1 << endl;
}