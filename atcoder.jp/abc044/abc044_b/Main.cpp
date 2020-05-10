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
  string w;
  cin >> w;

  int flag = 0;
  FOR(i,'a','z'){
    int cnt = 0;
    REP(j,w.size()){
      if(w.at(j) == i){
        cnt++;
      }
    }
    if(cnt%2 == 1){
      flag = 1;
    }
  }

  if(flag == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}