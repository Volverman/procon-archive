#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  string S;
  cin >> S;
  int flag = 0;
  if(S[1]=='{'){
    int cnt = 1;
    FOR(i,1,sz(S)){
      if(S[i]=='{'){
        cnt++;
      }else if(S[i]=='}'){
        cnt--;
      }
      if(cnt==1&&S[i+1]==':'){
        flag=1;
      }
    }
  }else if(sz(S)>=3){
    REP(i,sz(S)){
      if(S[i]==':'){
        flag=1;
        break;
      }else if(S[i]==','){
        break;
      }
    }
  }else if(sz(S)==2){
    flag=1;
  }

  if(flag==1){
    cout << "dict" << endl;
  }else{
    cout << "set" << endl;
  }
}