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

  vector<int> t(N);
  int sum = 0;
  REP(i, N){
    cin >> t[i];
    sum+=t[i];
  }
  int ans=0;
  if(N==4){
    ans=min(min(min(max(t[0],sum-t[0]),max(t[1],sum-t[1])),min(max(t[2],sum-t[2]),max(t[3],sum-t[3]))),min(min(max(t[0]+t[1],sum-t[0]-t[1]),max(t[0]+t[2],sum-t[0]-t[2])),max(t[0]+t[3],sum-t[0]-t[3])));
  }else if(N==3){
    ans=min(min(max(t[0],sum-t[0]),max(t[1],sum-t[1])),max(t[2],sum-t[2]));
  }else if(N==2){
    ans=max(t[0],sum-t[0]);
  }else{
    ans=t[0];
  }

  cout << ans << endl;
}