#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
  
int main()
{
  int N, K;
  cin >> N >> K;

  vector<double> p(N);
  REP(i, N){
    cin >> p[i];
    p[i]=(p[i]+1)/2;
  }
  double sum = 0;
  REP(i,K){
    sum+=p[i];
  }
  double MAX = sum;
  REP(i,N-K){
    sum -=p.at(i);
    sum +=p.at(i+K);
    MAX = max(MAX,sum);
  }

  cout << fixed << setprecision(10) << MAX << endl;
}