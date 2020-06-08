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
  string s, t;
  cin >> s >> t;

  int flag = 0;
  int flag2 = 0;
  REP(i,3){
    if(s.at(i)!=t.at(i)){
      if(s.at(i)-32!=t.at(i)&&t.at(i)-32!=s.at(i)){
        flag2 = 1;
      }else{
        flag = 1;
      }
    }
  }

  if(flag2 == 1){
    cout << "different" << endl;
  }else if(flag == 1){
    cout << "case-insensitive" << endl;
  }else{
    cout << "same" << endl;
  }
}