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
  unsigned long long A, B, N;
  cin >> A >> B >> N;
  if(N + 1 >= B){
    cout << ((B-1)*A)/B << endl;
  }else{
    cout << ((N)*A)/B << endl;
  }
}