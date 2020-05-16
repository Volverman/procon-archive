#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int gcd(int a, int b)
{
  if (a%b == 0)
  {
    return(b);
  }
  else
  {
    return(gcd(b, a%b));
  }
}

int main()
{
  int K;
  cin >> K;

  int sum = 0;
  FOR(i,1,K+1){
    FOR(j,1,K+1){
      FOR(k,1,K+1){
        sum += gcd(i,gcd(j,k));
      }
    }
  }

  cout << sum << endl;
}