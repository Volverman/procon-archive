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
  string T;
  cin >> T;
  REP(i,T.size()){
    if(T.at(i)=='?'){
      T.at(i)='D';
    }
  }
  int ans = 0;
  REP(i,T.size()){
    if(T.at(i)=='D'){
      ans++;
    }
  }
  REP(i,T.size()-1){
    if(T.at(i)=='P'&&T.at(i+1)=='D'){
      ans++;
    }
  }
  cout << T << endl;
}