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
  ll N;
  cin >> N;

  if(N%2==1||N==0){
    cout << 0 << endl;
  }else{
    ll x=10;
    ll sum=0;
    while(N/x!=0){
      sum+=N/x;
      x*=5;
    }
    cout << sum << endl;
  }
}