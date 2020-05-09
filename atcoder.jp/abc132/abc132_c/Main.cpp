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
  vector<int> d(N);
  REP(i, N) cin >> d[i];
  
  sort(ALL(d));
  if(d.size()%2 == 0){
    cout << d.at(N/2) - d.at(N/2-1) << endl;
  }else{
    cout << 0 << endl;
  }
}