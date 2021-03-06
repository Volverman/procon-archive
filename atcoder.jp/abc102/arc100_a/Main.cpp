#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e15
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  ll N;
  cin >> N;
  vector<int> A(N);
  ll sum = 0;
  REP(i, N){
    cin >> A[i];
    A[i]-=i;
    sum+=A[i];
  }
  sort(ALL(A));

  ll cnt = 0;
  REP(i,N){
    cnt+=abs(A[i]-A[N/2]);
  }

  cout << cnt << endl;
}