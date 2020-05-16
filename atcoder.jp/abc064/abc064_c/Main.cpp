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

  vector<int> A(N);
  REP(i, N) cin >> A[i];
  
  int B[9] = {0};
  REP(i,N){
    if(A.at(i)<3200){
      B[A.at(i)/400]++;
    }else{
      B[8]++;
    }
  }
  int sum = 0;
  REP(i,8){
    if(B[i]!=0){
      sum++;
      
    }
  }
  if(sum==0){
    cout << 1 << " " << sum+B[8] << endl;
  }else{
    cout << sum << " " << sum+B[8] << endl;
  }
}