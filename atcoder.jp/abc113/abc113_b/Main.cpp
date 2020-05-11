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
  int N, T, A;
  cin >> N >> T >> A;

  vector<int> H(N);
  REP(i, N) cin >> H[i];
  
  vector<double> D(N);
  REP(i,N){
    D.at(i) = max(A - (T - H.at(i)*0.006),(T - H.at(i)*0.006) - A);
  }
  
  sort(ALL(D));
  REP(i,N){
    if(D.at(0) == max(A - (T - H.at(i)*0.006),(T - H.at(i)*0.006) - A)){
      cout << i+1 << endl;
    }
  }
}