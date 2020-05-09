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
  if((B-1)%(A-1)==0){
    cout << (B-1)/(A-1) << endl;
  }else{
    cout << (B-1)/(A-1)+1 << endl;
  }
}