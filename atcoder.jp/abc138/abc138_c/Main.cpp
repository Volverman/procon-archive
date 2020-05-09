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
  double N;
  cin >> N;
  vector<double> v(N);
  REP(i, N) cin >> v[i];
  
  sort(ALL(v));
  stack<double> S;
  REPR(i,N-1){
    S.push(v.at(i));
  }
  while(S.size() > 1){
    double a = S.top();
    S.pop();
    double b = S.top();
    S.pop();
    S.push((a+b)/2);
  }
  cout << S.top() << endl;
}