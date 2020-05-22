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
  ll N;
  cin >> N;

  ll i = 1;
  ll sum = 1;
  while(sum<N){
    i++;
    sum+=i;
  }

  FOR(j,1,i+1){
    if(j!=sum-N){
      cout << j << endl;
    }
  }
}