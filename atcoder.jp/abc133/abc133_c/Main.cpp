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
  ll L,R;
  cin >> L >> R;
  ll N = 2019;
  if(L/N!=R/N){
    cout << 0 << endl;
  }else{
    ll MIN = 2018;
    FOR(i,L,R){
      FOR(j,i+1,R+1){
        MIN = min(MIN,(i%N)*(j%N)%N);
      }
    }
    cout << MIN << endl;
  }
}