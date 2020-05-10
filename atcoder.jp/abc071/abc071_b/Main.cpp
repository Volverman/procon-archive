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
  string S;
  cin >> S;

  int flag2 = 0;
  FOR(i,'a','z'+1){
    int flag = 0;
    REP(j,S.size()){
      if(S.at(j)==i){
        flag = 1;
        break;
      }
    }
    if(flag == 0){
      cout << char(i) << endl;
      flag2 = 1;
      break;
    }
  }
  if(flag2 == 0){
    cout << "None" << endl;
  }
}