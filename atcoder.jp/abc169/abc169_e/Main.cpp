#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<ll,ll>;

int main()
{
  int N;
  cin >> N;
  vector<P> A(N);
  vector<P> B(N);
  REP(i,N){
    cin >> A[i].first >> A[i].second;
    B[i].first=A[i].second;
    B[i].second=A[i].first;
  }
  sort(ALL(A));
  sort(ALL(B));
  
  if(N%2==0){
    cout << (B[N/2].first+B[N/2-1].first)-(A[N/2].first+A[N/2-1].first)+1 << endl;
  }else{
    cout << B[N/2].first-A[N/2].first+1 << endl;
  }
}