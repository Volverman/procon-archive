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

  vector<int> a(S.size(),0);
  REP(i,S.size()){
    if(S.at(i) == 'A'||S.at(i) == 'G'||S.at(i) == 'C'||S.at(i) == 'T'){
      a.at(i) = 1;
    }
  }

  int MAX = 0;
  int cnt = 0;
  REP(i,a.size()){
    if(a.at(i) == 1){
      cnt++;
      MAX = max(MAX,cnt);
    }else{
      cnt = 0;
    }
  }
  cout << MAX <<endl;
}