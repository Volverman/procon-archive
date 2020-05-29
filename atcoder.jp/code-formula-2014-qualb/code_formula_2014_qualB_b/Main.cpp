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
  string n;
  cin >> n;
  reverse(ALL(n));
  int a=0,b=0;
  REP(i,n.size()){
    if(i%2==0){
      b+=n.at(i)-'0';
    }else{
      a+=n.at(i)-'0';
    }
  }

  cout << a << " " << b << endl;
}