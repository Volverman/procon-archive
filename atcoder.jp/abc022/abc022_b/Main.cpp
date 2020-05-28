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
  map<int,int> mp;
  int sum=0;
  vector<int> A(N);
  REP(i, N){
    cin >> A[i];
    if(mp[A[i]]>0){
      sum++;
    }
    mp[A[i]]++;
  }
  cout << sum << endl;
}