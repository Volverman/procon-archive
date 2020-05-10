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
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int cnt = 0;
  REP(i,A+1){
    REP(j,B+1){
      REP(k,C+1){
        if(i*500+j*100+k*50==X){
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
}