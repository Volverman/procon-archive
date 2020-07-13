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
  ll N,K,M,R;
  cin >> N >> K >> M >> R;
  vector<ll> A(N-1);
  REP(i, N-1) cin >> A[i];
  sort(ALL(A));
  reverse(ALL(A));
  ll x = R*K;
  ll sum1 = 0;
  ll sum2 = 0;
  REP(i,K-1){
    sum1+=A[i];
  }
  if(K!=N){
    REP(i,K){
      sum2+=A[i];
    }
    if(sum2>=x){
      cout << 0 << endl;
    }else if(x-sum1<=M&&x-sum1>=0){
      cout << x-sum1 << endl;
    }else{
      cout << -1 << endl;
    }
  }else{
    if(sum1>=x){
      cout << 0 << endl;
    }else if(x-sum1<=M&&x-sum1>=0){
      cout << x-sum1 << endl;
    }else{
      cout << -1 << endl;
    }
  }
}