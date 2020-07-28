#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  int x=0,y=0,z=0;
  REP(i,N){
    if(S.at(i)=='R'){
      x++;
    }else if(S.at(i)=='G'){
      y++;
    }else{
      z++;
    }
  }
  cout << x%2+y%2+z%2 << endl;
}