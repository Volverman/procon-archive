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
  int N;
  cin >> N;
  vector<int> ans(N+1,0);
  for(int x = 1;x*x<=N;x++){
    for(int y = 1;y*y<=N;y++){
      for(int z = 1;z*z<=N;z++){
        if(x*x+y*y+z*z+x*y+y*z+x*z<=N){
          ans[x*x+y*y+z*z+x*y+y*z+x*z]++;
        }
      }
    }
  }

  FOR(i,1,N+1){
    cout << ans[i] << endl;
  }
}