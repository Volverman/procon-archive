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
  vector<P> A(N);
  REP(i,N) cin >> A[i].second >> A[i].first;

  sort(ALL(A));
  int time = 0;
  int flag = 0;
  REP(i,N){
    if(time+A.at(i).second>A.at(i).first){
      flag = 1;
      break;
    }
    time+=A.at(i).second;
  }

  if(flag == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}