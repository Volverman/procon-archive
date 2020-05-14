#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
  
int main()
{
  int N;
  cin >> N;
  vector<string> a(N);
  REP(i, N) cin >> a[i];
  int M;
  cin >> M;
  vector<string> b(M);
  REP(i, M) cin >> b[i];
  
  map<string,int> A;
  REP(i,N){
    A[a.at(i)]++;
  }

  REP(i,M){
    A[b.at(i)]--;
  }

  int MAX = 0;
  for(auto x:A){
    MAX = max(MAX,x.second);
  }
  cout << MAX << endl;
}