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
  ll cnt = 0;
  ll ans = 0;
  S+="00";
  REP(i,S.size()-1){
    if(S.at(i)=='2'&&S.at(i+1)=='5'){
      cnt++;
      i++;
    }else{
      ans+=cnt*(cnt+1)/2;
      cnt=0;
    }
  }

  cout << ans << endl;
}