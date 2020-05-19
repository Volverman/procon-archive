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
  
  int cnt = 0;
  REP(i,N-1){
    if(A[i]==i+1){
      int x = A[i];
      A[i]=A[i+1];
      A[i+1]=x;
      cnt++;
    }
  }

  if(A[N-1]==N){
    cnt++;
  }

  cout << cnt << endl;
}