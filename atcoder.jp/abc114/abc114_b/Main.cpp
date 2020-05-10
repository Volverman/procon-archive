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

  int MIN = INF;
  REP(i,S.size() - 2){
    string a = S.substr(i,3);
    int b = stoi(a);
    int c = max(b-753,753-b);
    MIN = min(MIN,c);
  }
  cout << MIN << endl;
}