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
  ll N;
  cin >> N;
  string s="";
  while(N>0){
    char a;
    if(N%26!=0){
      a = N%26+'a'-1;
      s=a+s;
      N/=26;
    }else{
      a = 'z';
      s=a+s;
      N=N/26-1;
    }
  }
  cout << s << endl;
}