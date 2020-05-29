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
  vector<string> A(N);
  map<string,int> mp;
  REP(i, N){
    cin >> A[i];
    mp[A[i]]++;
  }
  
  string ans;
  int MAX=0;
  for(auto x:mp){
    if(x.second>MAX){
      MAX=x.second;
      ans=x.first;
    }
  }

  cout << ans << endl;
}