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
  ll A,V,B,W,T;
  cin >> A >> V >> B >> W >> T;
  if((B>=A&&V>W&&(B-A)<=T*(V-W))||(B<=A&&V>W&&(A-B)<=T*(V-W))){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}