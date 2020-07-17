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

int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int day2[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

int main()
{
  int y,m,d;
  char ch1,ch2;
  cin >> y >> ch1 >> m >> ch2 >> d;

  while(y%(m*d)!=0){
    d++;
    int uruu = 0;
    if(y%4==0&&(y%100!=0||y%400==0)){
      uruu=1;
    }
    if((uruu==0&&d>day[m-1])||(uruu==1&&d>day2[m-1])){
      d=1;
      m++;
    }

    if(m>12){
      y++;
      m=1;
    }
  }

  cout << y << ch1;
  if(m<10){
    cout << 0;
  }
  cout << m << ch2;
  if(d<10){
    cout << 0;
  }
  cout << d << endl;
}