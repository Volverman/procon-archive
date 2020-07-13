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
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  A.push_back(0);
  
  int cnt = 0;
  int ans = 0;
  REP(i,N){
    if(A[i]<A[i+1]){
      cnt++;
    }else{
      cnt++;
      if(cnt>=K){
        ans+=cnt-K+1;
      }
      cnt=0;
    }
  }

  cout << ans << endl;
}