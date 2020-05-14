#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
  int N;
  cin >> N;

  vector<vector<double>> x(N,vector<double>(2));
  REP(i, N){
    REP(j, 2){
      cin >> x.at(i).at(j);
    }
  }
  
  long double sum = 0;
  REP(i,N){
    FOR(j,i+1,N){
      sum+=sqrt((x.at(i).at(0)-x.at(j).at(0))*(x.at(i).at(0)-x.at(j).at(0))+(x.at(i).at(1)-x.at(j).at(1))*(x.at(i).at(1)-x.at(j).at(1)));
    }
  }
  if(N>=3){
    sum = sum*(2*facctorialMethod(N-1));
    cout << fixed << setprecision(10) << sum/facctorialMethod(N) << endl;
  }else{
    cout << fixed << setprecision(10) << sum << endl;
  }
}