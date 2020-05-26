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

int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};

int main()
{
  string S;
  int T;
  cin >> S >> T;

  int x=0,y=0;
  int MAX=0,MIN=0;

  REP(i,S.size()){
    if(S.at(i)=='L'){
      x+=dx[0];
      y+=dy[0];
    }else if(S.at(i)=='R'){
      x+=dx[1];
      y+=dy[1];
    }else if(S.at(i)=='U'){
      x+=dx[2];
      y+=dy[2];
    }else if(S.at(i)=='D'){
      x+=dx[3];
      y+=dy[3];
    }else if(S.at(i)=='?'){
      MAX++;
    }
  }

  int maxans = MAX+abs(x)+abs(y);
  int minans;
  if(abs(x)+abs(y)-MAX>=0){
    minans=abs(x)+abs(y)-MAX;
  }else{
    if(((abs(x)+abs(y))%2==0&&MAX%2==0)||(abs(x)+abs(y))%2==1&&MAX%2==1){
      minans = 0;
    }else{
      minans = 1;
    }
  }
  if(T==1){
    cout << maxans << endl;
  }else{
    cout << minans << endl;
  }
}