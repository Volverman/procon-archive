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
  ll Q,H,S,D,N;
  cin >> Q >> H >> S >> D >> N;

  S = min(min(Q*4,H*2),S);

  if(S*2<D){
    cout << S*N << endl;
  }else{
    if(N%2==0){
      cout << D*(N/2) << endl;
    }else{
      cout << D*(N/2)+S << endl;
    }
  }
}