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
  int N, Q;
  string S;
  cin >> N >> Q >> S;
  vector<P> A(Q);
  REP(i,Q) cin >> A[i].first >> A[i].second;
  
  int B[N]={0};
  int cnt=0;
  REP(i,N-1){
    if(S.at(i)=='A'&&S.at(i+1)=='C'){
      cnt++;
    }
    B[i+1]=cnt;
  }

  REP(i,Q){
    cout << B[A.at(i).second-1]-B[A.at(i).first-1] << endl;
  }
}