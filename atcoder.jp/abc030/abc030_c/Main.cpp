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
  ll N,M,X,Y;
  cin >> N >> M >> X >> Y;
  vector<ll> A(N);
  REP(i, N) cin >> A[i];
  vector<ll> B(M);
  REP(i, M) cin >> B[i];
  
  ll now = 0;
  int flag = 0;
  ll cnt = 0;
  while(true){
    if(flag==0){
      auto itr=lower_bound(ALL(A),now);
      if(itr-A.begin()==N){
        break;
      }
      now=*itr+X;
      flag=1;
    }else{
      auto itr2=lower_bound(ALL(B),now);
      if(itr2-B.begin()==M){
        break;
      }
      now=*itr2+Y;
      flag=0;
      cnt++;
    }
  }

  cout << cnt << endl;
}