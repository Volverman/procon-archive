#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
 
int main()
{
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> A(Q);
  REP(i, Q) cin >> A[i];
  
  int a = K - Q;
  vector<int> B(N,a);
  REP(i,Q){
    B.at(A.at(i)-1)++;
  }

  REP(i,N){
    if(B.at(i)>0){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}