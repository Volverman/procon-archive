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

  int g = 0;
  int p = 0;
  REP(i,s.size()){
    if(s.at(i)=='g'){
      g++;
    }else{
      p++;
    }
  }

  cout << (g-p)/2 << endl;
}