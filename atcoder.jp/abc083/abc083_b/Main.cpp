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
  int N, A, B;
  cin >> N >> A >> B;

  int cnt = 0;
  FOR(i,1,N+1){
    if((i/10000%10+i/1000%10+i/100%10+i/10%10+i%10) >= A && B >= (i/10000%10+i/1000%10+i/100%10+i/10%10+i%10)){
      cnt+=i;
    }
  }
  cout << cnt << endl;
}