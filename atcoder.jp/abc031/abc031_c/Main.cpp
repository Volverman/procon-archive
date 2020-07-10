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
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  
  int ans = -INF;
  REP(i,N){
    int MAXao = -INF;
    int MAXtk = -INF;
    REP(j,N){
      int tk=0;
      int ao=0;
      if(i==j) continue;
      int x=min(i,j);
      int y=max(i,j);
      FOR(k,x,y+1){
        if((k-x)%2==0){
          tk+=A[k];
        }else{
          ao+=A[k];
        }
      }
      if(MAXao<ao){
        MAXtk=tk;
        MAXao=ao;
      }
    }
    ans = max(ans,MAXtk);
  }

  cout << ans << endl;
}