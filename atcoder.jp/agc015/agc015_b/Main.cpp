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

  ll N = S.size();
  ll cnt = 0;
  REP(i,N){
    if(S.at(i)=='U'){
      cnt += N-1-i;
      cnt += 2*i;
    }else{
      cnt += i;
      cnt += 2*(N-1-i);
    }
  }
  cout << cnt << endl;
}