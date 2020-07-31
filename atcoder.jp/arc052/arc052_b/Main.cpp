#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define PI 3.14159265358979323846
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<long double,long double>;


int main()
{
  long double N,Q;
  cin >> N >> Q;
  vector<vector<long double>> A(N,vector<long double>(3));
  REP(i, N){
    REP(j, 3){
      cin >> A.at(i).at(j);
    }
  }
  vector<P> B(Q);
  REP(i,Q) cin >> B[i].first >> B[i].second;
  
  vector<long double> V(200010,0);
  REP(i,N){
    long double sum = PI*A[i][1]*A[i][1]*A[i][2]/3.0;
    for(int j=200000;j>A[i][0]+A[i][2];j--){
      V[j]+=sum;
    }
    for(int j=A[i][0]+A[i][2];j>=A[i][0];j--){
      long double x = A[i][0]+A[i][2]-j;
      V[j]+=sum*(1-powl(x,3)/powl(A[i][2],3));
    }
  }

  REP(i,Q){
    cout << fixed << setprecision(6) << V[B[i].second]-V[B[i].first] << endl;
  }
}