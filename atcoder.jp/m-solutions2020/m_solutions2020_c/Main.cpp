#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  ll N,K;
  cin >> N >> K;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  
  REP(i,N-K){
    if(A[i]<A[i+K]){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}