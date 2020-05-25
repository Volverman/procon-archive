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
  int X,Y;
  cin >> X >> Y;

  map<int,int> mp;
  vector<int> A(X);
  REP(i, X){
    cin >> A[i];
    mp[A[i]]++;
  }
  vector<int> B(Y);
  REP(i, Y){
    cin >> B[i];
    mp[B[i]]++;
  }
  
  double P=0,Q=0;
  Q=mp.size();
  for(auto z:mp){
    if(z.second>1){
      P++;
    }
  }

  cout << fixed << setprecision(10) << P/Q << endl;
}