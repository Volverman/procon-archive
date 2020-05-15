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
  int A, B, C;
  cin >> A >> B >> C;
  int a = A;
  int flag = 0;
  REP(i,B){
    if(a%B==C){
      flag = 1;
    }
    a+=A;
  }

  if(flag == 1){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}