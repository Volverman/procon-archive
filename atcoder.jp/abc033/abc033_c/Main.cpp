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

  int cnt=0;
  int ans=0;
  REP(i,S.size()){
    if(S.at(i)=='+'){
      if(cnt==0){
        ans++;
      }
      cnt=0;
    }else if(S.at(i)=='*'){
    }else if(S.at(i)=='0'){
      cnt++;
    }else{
    }
  }
  if(cnt==0){
    ans++;
  }

  cout << ans << endl;
}