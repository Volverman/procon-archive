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
  int n,X;
  cin >> n >> X;
  vector<int> A(n);
  REP(i, n) cin >> A[i];
  int j = 0;
  int ans = 0;
  while(X!=0){
    if(X%2==1){
      ans+=A[j];
    }
    j++;
    X/=2;
  }

  cout << ans << endl;
}