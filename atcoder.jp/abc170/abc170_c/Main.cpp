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
  int X,N;
  cin >> X >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  
  int MIN = INF;
  int ans = 0;
  REP(i,102){
    int flag = 0;
    REP(j,N){
      if(i==A[j]){
        flag=1;
      }
    }
    if(flag==0){
      if(MIN>abs(X-i)){
        MIN=abs(X-i);
        ans=i;
      }
    }
  }

  cout << ans << endl;
}