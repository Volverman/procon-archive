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
  int N;
  cin >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  
  int MIN = INF;
  REP(i,N){
    int cnt = 0;
    while(A.at(i) > 1&&A.at(i)%2 == 0){
      A.at(i)/=2;
      cnt++;
    }
    MIN = min(MIN,cnt);
  }
  cout << MIN << endl;
}