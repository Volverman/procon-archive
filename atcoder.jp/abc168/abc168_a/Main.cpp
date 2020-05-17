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
  int N;
  cin >> N;
  N = N%10;

  if(N==2||N==4||N==5||N==7||N==9){
    cout << "hon" << endl;
  }else if(N==0||N==1||N==6||N==8){
    cout << "pon" << endl;
  }else{
    cout << "bon" << endl;
  }
}