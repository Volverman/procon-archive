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
  vector<int> H(N);
  REP(i, N) cin >> H[i];
  
  int cnt = 0;
  int MAX = 0;
  REP(i,N-1){
    if(H.at(i)>=H.at(i+1)){
      cnt++;
    }else{
      cnt = 0;
    }
    MAX = max(MAX,cnt);
  }
  cout << MAX << endl;
}