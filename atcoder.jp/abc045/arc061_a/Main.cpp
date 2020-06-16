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

int main()
{
  string S;
  cin >> S;

  int N = S.size();
  ll ans = 0;
  REPR(i,N-1){
    int cnt = pow(2,i);
    int X = pow(2,i);
    ans+=pow(10,N-1-i)*(S.at(i)-'0')*X;
    int k = 1;
    while(cnt+X<=pow(2,N-1)){
      cnt+=X;
      ans+=pow(10,N-1-i-k)*(S.at(i)-'0')*X;
      X*=2;
      k++;
    }
  }

  cout << ans << endl;
}