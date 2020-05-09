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
  int s;
  cin >> s;

  if(s>4){
    int cnt = 0;
    while(s > 4){
      if(s%2 == 0){
        s = s/2;
        cnt++;
      }else{
        s = 3*s + 1;
        cnt++;
      }
    }
    cout << cnt + 4 << endl;
  }else if(s == 4){
    cout << 4 << endl;
  }else if(s == 3){
    cout << 9 << endl;
  }else if(s == 2){
    cout << 4 << endl;
  }else if(s == 1){
    cout << 4 << endl;
  }
}