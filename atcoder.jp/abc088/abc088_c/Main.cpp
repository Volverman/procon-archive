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
  vector<vector<int>> c(3,vector<int>(3));
  REP(i, 3){
    REP(j, 3){
      cin >> c.at(i).at(j);
    }
  }
  
  if(c.at(0).at(1)-c.at(0).at(0)==c.at(1).at(1)-c.at(1).at(0)
  && c.at(0).at(1)-c.at(0).at(0)==c.at(2).at(1)-c.at(2).at(0)
  && c.at(0).at(2)-c.at(0).at(0)==c.at(1).at(2)-c.at(1).at(0)
  && c.at(0).at(2)-c.at(0).at(0)==c.at(2).at(2)-c.at(2).at(0)
  && c.at(1).at(0)-c.at(0).at(0)==c.at(1).at(1)-c.at(0).at(1)
  && c.at(1).at(0)-c.at(0).at(0)==c.at(1).at(2)-c.at(0).at(2)
  && c.at(2).at(0)-c.at(0).at(0)==c.at(2).at(1)-c.at(0).at(1)
  && c.at(2).at(0)-c.at(0).at(0)==c.at(2).at(2)-c.at(0).at(2)){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  
}