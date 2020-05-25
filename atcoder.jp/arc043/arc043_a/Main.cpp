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
  ll N,A,B;
  cin >> N >> A >> B;

  ll sum = 0;
  ll MAX = 0;
  ll MIN = INF;
  vector<ll> S(N);
  REP(i, N){
    cin >> S[i];
    sum+=S[i];
    MAX = max(MAX,S[i]);
    MIN = min(MIN,S[i]);
  }

  double ave = double(sum)/double(N);
  if(MAX!=MIN){
    double P = double(B)/double(MAX-MIN);
    double Q = double(A)-ave*P;
    cout << fixed << setprecision(10) << P << " " << Q << endl;
  }else{
    cout << -1 << endl;
  }
}