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
  string s;
  cin >> s;
  char now = ' ';
  int cnt = 0;
  REP(i,s.size()){
    if(i==0){
      cout << s.at(i);
      now=s.at(i);
      cnt=1;
    }else if(now!=s.at(i)&&i!=0){
      cout << cnt;
      now=s.at(i);
      cout << now;
      cnt=1;
    }else{
      cnt++;
    }
  }
  cout << cnt;

  cout << endl;
}