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
  string S;
  cin >> S;

  int a = 0,b = 0,c = 0;
  REP(i,S.size()){
    if(S.at(i)=='a'){
      a++;
    }else if(S.at(i) == 'b'){
      b++;
    }else{
      c++;
    }
  }

  if(abs(a-b)>=2||abs(b-c)>=2||abs(c-a)>=2){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }
}