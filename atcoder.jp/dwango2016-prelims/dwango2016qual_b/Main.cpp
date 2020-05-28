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

  vector<int> A(N-1);
  REP(i, N-1) cin >> A[i];
  vector<int> ans(N);
  ans[0]=A[0];
  ans[N-1]=A[N-2];
  FOR(i,1,N-1){
    ans[i]=min(A[i-1],A[i]);
  }
  REP(i,N-1){
    cout << ans[i] << " ";
  }
  cout << ans[N-1] << endl;
}