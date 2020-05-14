#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int divide2(int a){
  int cnt = 0;
  while(a%2==0){
    cnt++;
    a = a/2;
  }
  return cnt;
}

int main()
{
  ll N;
  cin >> N;

  vector<ll> A(N);
  REP(i, N) cin >> A[i];
  int cnt = 0;
  REP(i,N){
    cnt+=divide2(A.at(i));
  }
  cout << cnt << endl;
}