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

vector<long long> fact_inv, inv, Com;

void init_nCk(int n, int SIZE) {
    fact_inv.resize(SIZE + 5);
    inv.resize(SIZE + 5);
    fact_inv[0] = fact_inv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < SIZE + 5; i++) {
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        fact_inv[i] = fact_inv[i - 1] * inv[i] % MOD;
    }
    Com.resize(SIZE + 5);
    Com[0] = 1;
    for (int i = 1; i < SIZE + 5; i++) {
        Com[i] = Com[i - 1] * ((n - i + 1) * inv[i] % MOD) % MOD;
    }
}
 
long long nCk(int k) {
    assert(!(k < 0));
    return Com[k];
}

int main()
{
  int X,Y;
  cin >> X >> Y;

  if((X+Y)%3!=0){
    cout << 0 << endl;
  }else{
    int n = (X+Y)/3;
    if(2*n-X<0||2*n-X>n){
      cout << 0 << endl;
    }else{
      int k = 2*n-X;
      init_nCk(n,k);
      cout << nCk(k) << endl;
    }
  }
}