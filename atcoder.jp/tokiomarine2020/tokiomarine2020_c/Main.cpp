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
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  REP(i,K){
    vector<int> imos(N+1,0);
    REP(j,N){
      imos.at(max(0,j-A[j]))++;
      imos.at(min(N,j+A[j]+1))--;
    }
    int sum = 0;
    REP(j,N){
      sum+=imos.at(j);
      A[j]=sum;
    }
    int flag=0;
    REP(j,N){
      if(A[j]!=N){
        flag=1;
      }
    }
    if(flag==0){
      break;
    }
  }

  REP(i,N){
    if(i!=N-1){
      cout << A[i] << " ";
    }else{
      cout << A[i];
    }
  }
  cout << endl;
}