#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
  
int main()
{
  string S;
  cin >> S;
  ll sum=0;
  ll flag = 0;
  ll cnt = 0;
  REP(i,S.size()){
    if(S.at(i) == 'W'){
      if(i>cnt){
        sum+=i-cnt;
      }
      cnt++;
    }
  }

  REP(i,S.size()-1){
    if(S.at(i) != 'W'){
      flag = 1;
    }
  }
  if(flag == 0){
    sum = 0;
  }
  cout << sum << endl;
}