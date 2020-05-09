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
  int N, A, B;
  string S;
  cin >> N >> A >> B >> S;

  int a = 0, b = 0;
  REP(i,S.size()){
    if(S.at(i) == 'a' && a+b < A+B){
      cout << "Yes" << endl;
      a++;
    }else if(S.at(i) == 'b' && b < B && a+b < A+B){
      cout << "Yes" << endl;
      b++;
    }else{
      cout << "No" << endl;
    }
  }
}