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

  int a = (N*100)/108;
  int b = (int)a*1.08;
  int c = (int)(a+1)*1.08;

  if(b == N){
    cout << a << endl;
  }else if(c == N){
    cout << a+1 << endl;
  }else{
    cout << ":(" << endl;
  }
}