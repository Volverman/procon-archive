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
  int N,R;
  cin >> N >> R;
  string S;
  cin >> S;
  reverse(ALL(S));
  int x = 0;
  int ans = 0;
  int flag = 0;
  REP(i,S.size()){
    if(S.at(i)=='.'){
      REP(j,R){
        if(i+j<=N-1){
          S.at(i+j)='o';
        }
      }
      ans++;
      if(flag==0){
        x=i;
        flag=1;
      }
    }
  }
  if(ans!=0){
    cout << ans+N-1-min(N-1,x+R-1) << endl;
  }else{
    cout << 0 << endl;
  }
}