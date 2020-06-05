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
  string S;
  cin >> S;

  int cnt = 0;
  REP(i,1000){
    string s;
    if(i==0){
      s="000";
    }else if(i<10){
      s="00"+to_string(i);
    }else if(i<100){
      s="0"+to_string(i);
    }else{
      s=to_string(i);
    }

    int x = 0;
    int flag=0;
    REP(j,S.size()){
      if(S.at(j)==s.at(x)){
        x++;
      }
      if(x==3){
        flag=1;
        break;
      }
    }

    if(flag==1){
      cnt++;
    }
  }

  cout << cnt << endl;
}