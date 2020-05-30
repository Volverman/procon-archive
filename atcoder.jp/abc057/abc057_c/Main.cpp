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
ll GetDigit(ll num){
    return to_string(num).length();
}
int main()
{
  ll N;
  cin >> N;

  ll MIN=INF;
  FOR(i,1,sqrt(N)+1){
    if(N%i!=0){
      continue;
    }else{
      MIN=min(MIN,max(GetDigit(i),GetDigit(N/i)));
    }
  }

  cout << MIN << endl;
}