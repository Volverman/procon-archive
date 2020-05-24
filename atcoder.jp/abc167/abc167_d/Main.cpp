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
  ll N,K;
  cin >> N >> K;
  vector<ll> A(N);
  REP(i, N) cin >> A[i];
  
  vector<ll> B(N,0);
  ll cnt=1;
  ll now=0;
  ll roop=0;
  REP(i,N+1){
    if(B.at(now)==0){
      B.at(now)=cnt;
      now=A.at(now)-1;
      cnt++;
    }else{
      roop = cnt-B.at(now);
      break;
    }
  }

  if(K<B.at(now)-1){
    REP(i,N){
      if(K==B.at(i)-1){
        cout << i+1 << endl;
      }
    }
  }else{
    REP(i,N){
      if((K-(B.at(now)-1))%roop+B.at(now)==B.at(i)){
        cout << i+1 << endl;
        break;
      }
    }
  }
}