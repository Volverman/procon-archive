#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  int sum = 0;
  int y=0;
  FOR(i,1,101){
    sum+=i*2;
    cout << sum-i << " " << i+y << endl;
    if(sum+i*2+2>1500){
      sum=0;
      y+=i*2;
    }
  }
}