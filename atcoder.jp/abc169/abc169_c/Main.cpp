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
  ll A;
  string B;
  cin >> A >> B;
  string b;
  REP(i,4){
    if(i!=1){
      b.push_back(B[i]);
    }
  }
  int C = atoi(b.c_str());
  cout << (A*C)/100 << endl;
}