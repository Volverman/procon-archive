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
  int x1,y1,r;
  cin >> x1 >> y1 >> r;
  int x2,y2,x3,y3;
  cin >> x2 >> y2 >> x3 >> y3;

  if(x1+r<=x3&&x1-r>=x2&&y1+r<=y3&&y1-r>=y2){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }
  if((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)<=r*r&&(x3-x1)*(x3-x1)+(y2-y1)*(y2-y1)<=r*r&&(x2-x1)*(x2-x1)+(y3-y1)*(y3-y1)<=r*r&&(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)<=r*r){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }
}