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
  int L,R,d;
  cin >> L >> R >> d;
  int cnt = 0;
  FOR(i,L,R+1){
    if(i%d==0){
      cnt++;
    }
  }

  cout << cnt << endl;
}