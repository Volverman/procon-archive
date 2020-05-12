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
  vector<string> A(N);
  REP(i, N) cin >> A[i];
  
  sort(ALL(A));
  int cnt = 1;
  int MAX = 0;

  REP(i,N-1){
    if(A.at(i) == A.at(i+1)){
      cnt++;
    }else{
      MAX = max(MAX,cnt);
      cnt = 1;
    }
  }
  MAX = max(MAX,cnt);
  cnt = 1;
  REP(i,N-1){
    if(A.at(i) == A.at(i+1)){
      cnt++;
    }else{
      if(cnt == MAX){
        cout << A.at(i) << endl;
      }
      cnt = 1;
    }
  }
  if(cnt == MAX){
    cout << A.at(N-1) << endl;
  }
}