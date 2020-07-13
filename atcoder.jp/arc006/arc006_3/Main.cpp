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
  
  vector<int> top;
  top.push_back(A[0]);
  FOR(i,1,N){
    int MIN = INF;
    int now = 0;
    REP(j,top.size()){
      if(top.at(j)>=A[i]){
        if(MIN>top.at(j)){
          now=j;
          MIN=top.at(j);
        }
      }
    }
    if(MIN<10000000){
      top.at(now)=A[i];
    }else{
      top.push_back(A[i]);
    }
  }

  cout << top.size() << endl;
}