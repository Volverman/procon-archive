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
  ll N, A, B;
  cin >> N >> A >> B;

  ll a = N/(A+B);
  ll b = N%(A+B);
  if(b-A>=0){
    cout << a*A+A << endl;
  }else{
    cout << a*A + b << endl;
  }
}