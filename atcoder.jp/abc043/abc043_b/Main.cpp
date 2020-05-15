#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
  
int main()
{
  string S;
  cin >> S;

  stack<int> A;
  REP(i,S.size()){
    if(S.at(i)=='0'){
      A.push(0);
    }else if(S.at(i)=='1'){
      A.push(1);
    }else{
      if(!A.empty()){
        A.pop();
      }
    }
  }
  stack<int> B;
  while(!A.empty()){
    B.push(A.top());
    A.pop();
  }

  while(!B.empty()){
    cout << B.top();
    B.pop();
  }
  cout << endl;
}