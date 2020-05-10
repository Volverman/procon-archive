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
  int A, B;
  cin >> A >> B;
  string S;
  cin >> S;
  int flag = 0;
  REP(i,S.size()){
    if((i<=A-1||(A+1<=i&&i<=A+B)) && S.at(i) == '-'){
      flag = 1;
      break;
    }else if(i==A&&S.at(i) != '-'){
      flag = 1;
      break;
    }
  }
  if(flag == 1){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}