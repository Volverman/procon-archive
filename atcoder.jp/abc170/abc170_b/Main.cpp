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
  int X, Y;
  cin >> X >> Y;
  if(X*2<=Y&&X*4>=Y&&Y%2==0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}