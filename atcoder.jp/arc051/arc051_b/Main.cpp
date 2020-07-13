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
  int K;
  cin >> K;
  vector<ll> fib;
  fib.push_back(1);
  fib.push_back(1);
  REP(i,K){
    fib.push_back(fib.at(fib.size()-1)+fib.at(fib.size()-2));
  }

  cout << fib.at(K-1) << " " << fib.at(K) << endl;
}