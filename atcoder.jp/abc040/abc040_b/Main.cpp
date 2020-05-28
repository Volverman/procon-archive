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
  int n;
  cin >> n;
  int minans=INF;
  FOR(i,1,n){
    minans=min(minans,max(i-(n/i),(n/i)-i)+n-((n/i)*i));
  }
  if(n==1){
    cout << 0 << endl;
  }else{
    cout << minans << endl;
  }
}