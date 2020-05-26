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
  int N,T;
  cin >> N >> T;

  int sum=0;
  vector<int> dif(N);
  REP(i, N){
    int x,y;
    cin >> x >> y;
    dif[i]=x-y;
    sum+=x;
  }
  sort(ALL(dif));
  reverse(ALL(dif));

  int ans=0;
  int j=0;
  REP(i,N){
    if(sum>T){
      sum-=dif[i];
      ans++;
    }
  }
  if(sum>T){
    cout << -1 << endl;
  }else{
    cout << ans << endl;
  }
}