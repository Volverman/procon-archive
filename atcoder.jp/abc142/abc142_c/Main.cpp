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
  int N;
  cin >> N;
  vector<pair<int, int>> a(N);
  REP(i, N) {
    int b;
    cin >> b;
    a.at(i).first = b;
    a.at(i).second = i;
  }
  sort(ALL(a));
  REP(i,N){
    cout << a.at(i).second + 1 << " ";
  }
  cout << endl;
}