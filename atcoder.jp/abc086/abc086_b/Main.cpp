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

  string a = to_string(A);
  string b = to_string(B);
  string c = a + b;
  int d = stoi(c);
  double e = sqrt(d);
  if(floor(e) == e){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}