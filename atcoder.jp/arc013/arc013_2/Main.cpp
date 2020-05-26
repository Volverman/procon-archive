#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  int C;
  cin >> C;

  vector<vector<int>> A(C,vector<int>(3));
  REP(i, C){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
    sort(ALL(A.at(i)));
  }
  int MAX1=0,MAX2=0,MAX3=0;
  REP(i,C){
    MAX1=max(MAX1,A.at(i).at(0));
    MAX2=max(MAX2,A.at(i).at(1));
    MAX3=max(MAX3,A.at(i).at(2));
  }

  cout << MAX1*MAX2*MAX3 << endl;
}