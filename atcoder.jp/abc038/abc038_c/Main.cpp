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
  
  ll ans = 0;
  ll cnt = 1;
  REP(i,N-1){
    if(A[i]>=A[i+1]){
      ans+=cnt*(cnt+1)/2;
      cnt=1;
    }else{
      cnt++;
    }
  }
  ans+=cnt*(cnt+1)/2;

  cout << ans << endl;
}