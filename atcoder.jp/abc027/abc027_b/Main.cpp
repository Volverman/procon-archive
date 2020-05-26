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

  vector<int> totalsum(N);
  vector<int> A(N);
  int sum=0;
  REP(i, N){
    cin >> A[i];
    sum+=A[i];
    totalsum[i]=sum;
  }
  if(totalsum[N-1]%N!=0){
    cout << -1 << endl;
  }else{
    int ave = totalsum[N-1]/N;
    int now = -1;
    int nowsum=0;
    int ans=0;
    REP(i,N){
      if((totalsum[i]-nowsum)%(i-now)==0&&(totalsum[i]-nowsum)/(i-now)==ave){
        ans+=i-now-1;
        now=i;
        nowsum=totalsum[i];
      }
    }
    cout << ans << endl;
  }
}