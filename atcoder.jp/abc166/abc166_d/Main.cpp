#include <bits/stdc++.h>
#define REP(i, n) for(ll i = 0; i < n; i++)
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
  ll x;
  cin >> x;

  int flag = 0;
  REP(i,130){
    REP(j,i+1){
      ll y = i*i*i*i*i;
      ll z = j*j*j*j*j;

      if(y-z==x){
        cout << i << " " << j;
        flag = 1;
        break;
      }else if(y+z==x){
        cout << i << " " << (-1)*j;
        flag = 1;
        break;
      }
    }
    if(flag == 1){
      break;
    }
  }
  cout << endl;
}
