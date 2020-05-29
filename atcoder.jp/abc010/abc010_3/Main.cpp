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
  int x1,y1,x2,y2,T,V;
  cin >> x1 >> y1 >> x2 >> y2 >> T >> V;
  int n;
  cin >> n;
  vector<P> A(n);
  REP(i,n) cin >> A[i].first >> A[i].second;
  
  int flag = 0;
  REP(i,n){
    if(sqrt((x1-A[i].first)*(x1-A[i].first)+(y1-A[i].second)*(y1-A[i].second))+sqrt((x2-A[i].first)*(x2-A[i].first)+(y2-A[i].second)*(y2-A[i].second))<=T*V){
      flag=1;
    }
  }

  if(flag==1){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}