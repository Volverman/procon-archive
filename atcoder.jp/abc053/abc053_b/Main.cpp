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
  string s;
  cin >> s;
  int flag = 0;
  int flag2 = 0;
  REP(i,s.size()){
    if(s.at(i) == 'A'){
      flag = i;
      break;
    }
  }
  REPR(i,s.size()-1){
    if(s.at(i) == 'Z'){
      flag2 = i;
      break;
    }
  }
  cout << flag2 - flag + 1<< endl;
}