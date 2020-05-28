#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 10007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  int n;
  cin >> n;
  vector<int> A(1000010);
  A[1]=0;
  A[2]=0;
  A[3]=1;
  REP(i,n){
    A[i+4]=(A[i+1]+A[i+2]+A[i+3])%MOD;
  }

  cout << A[n] << endl;
}