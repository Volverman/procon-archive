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
  int N,X,Y;
  cin >> N >> X >> Y;

  vector<int> cnt(N,0);
  FOR(i,1,N+1){
    FOR(j,i+1,N+1){
      if(i<=X&&j<=X){
        cnt[j-i]++;
      }else if(i<=X&&j>X&&j<Y){
        cnt[min(X-i+j-X,X-i+1+Y-j)]++;
      }else if(i<=X&&j>=Y){
        cnt[X-i+1+j-Y]++;
      }else if(i>X&&i<Y&&j<Y){
        cnt[min(j-i,i-X+1+Y-j)]++;
      }else if(i>X&&i<Y&&j>=Y){
        cnt[min(j-Y+Y-i,j-Y+1+i-X)]++;
      }else if(i>=Y){
        cnt[j-i]++;
      }
    }
  }

  FOR(i,1,N){
    cout << cnt[i] << endl;
  }
}