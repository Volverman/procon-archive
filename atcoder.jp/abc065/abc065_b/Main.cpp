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
  
  int x = 1;
  vector<int> B(N,0);
  int flag = 0;
  int cnt = 0;
  while(B.at(x-1)==0){
    B.at(x-1) = 1;
    x = A.at(x-1);
    cnt++;
    if(x==2){
      flag = 1;
      break;
    }
  }

  if(flag == 1){
    cout << cnt << endl;
  }else{
    cout << -1 << endl;
  }
}