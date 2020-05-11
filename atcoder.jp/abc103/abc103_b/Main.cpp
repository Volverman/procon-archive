#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

string ROTATE(string S){
  char b = S.at(S.size()-1);
  S.pop_back();
  S = b + S;
  return S;
}

int main()
{
  string S, T;
  cin >> S >> T;

  int flag = 0;
  REP(i,S.size()){
    if(S == T){
      flag = 1;
    }
    S = ROTATE(S);
  }

  if(flag == 1){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}