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
  int N, Y;
  cin >> N >> Y;

  int flag = 0;
  REP(i,N+1){
    REP(j,N-i+1){
      if((Y-10000*i-5000*j)/1000==N-i-j){
        flag = 1;
        cout << i << " " << j << " " << N-i-j << endl;
        break;
      }
    }
    if(flag == 1){
      break;
    }
  }

  if(flag == 0){
    cout << "-1 -1 -1" << endl;
  }
}