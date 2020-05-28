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

  N%=30;
  vector<int> A={1,2,3,4,5,6};
  REP(i,N){
    swap(A[i%5],A[i%5+1]);
  }
  REP(i,6){
    cout << A[i];
  }
  cout << endl;
}