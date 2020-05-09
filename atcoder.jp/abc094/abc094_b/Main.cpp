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
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> a(M);
  REP(i, M) cin >> a[i];
  
  vector<int> b(N + 1,0);
  REP(i,M){
    b.at(a.at(i)) = 1;
  }
  int cnt = 0;
  REP(i,X){
    if(b.at(i) == 1){
      cnt++;
    }
  }

  cout << min(cnt,M-cnt) << endl;
}