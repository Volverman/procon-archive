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
  ll A,B;
  cin >> A >> B;

  ll f,h,fh;
  ll x1,y1,x2,y2,x3,y3;
  if(A%4==0){
    x1=A/4;
  }else{
    x1=A/4+1;
  }
  y1=B/4;
  f=y1-x1+1;
  if(A%100==0){
    x2=A/100;
  }else{
    x2=A/100+1;
  }
  y2=B/100;
  h=y2-x2+1;
  if(A%400==0){
    x3=A/400;
  }else{
    x3=A/400+1;
  }
  y3=B/400;
  fh=y3-x3+1;

  cout << f-(h-fh) << endl;
}