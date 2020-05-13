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
  long long N, A, B;
  cin >> N >> A >> B;

  if((B-A)%2==0){
    cout << (B-A)/2 << endl;
  }else{
    cout << min(N-B+1+(B-A-1)/2,A+(B-A-1)/2) << endl;
  }
}