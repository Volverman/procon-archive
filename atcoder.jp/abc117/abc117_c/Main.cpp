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
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  REP(i, M) cin >> A[i];
  
  sort(ALL(A));
  if(N>=M){
    cout << 0 << endl;
  }else{
    vector<int> B(M-1);
    REP(i,M-1){
      B[i]=A[i+1]-A[i];
    }
    sort(ALL(B));
    int sum = 0;
    REP(i,M-N){
      sum+=B[i];
    }
    cout << sum << endl;
  }
}