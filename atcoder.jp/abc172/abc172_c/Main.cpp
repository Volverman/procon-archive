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
  ll N,M,K;
  cin >> N >> M >> K;
  vector<ll> A(N);
  vector<ll> Asum(N);
  ll suma = 0;
  REP(i, N){
    cin >> A[i];
    suma+=A[i];
    Asum.at(i)=suma;
  }
  vector<ll> B(M);
  vector<ll> Bsum(M);
  ll sumb = 0;
  REP(i, M){
    cin >> B[i];
    sumb+=B[i];
    Bsum.at(i)=sumb;
  }
  
  ll MAX = 0;
  REP(i,N){
    auto itr = upper_bound(ALL(Bsum),K-Asum.at(i));
    if(K-Asum.at(i)<0){
      break;
    }
    ll x = i+distance(Bsum.begin(),itr)+1;
    MAX = max(MAX,x);
  }    
  auto itr = upper_bound(ALL(Bsum),K);
  ll y = distance(Bsum.begin(),itr);
  MAX = max(MAX,y);


  cout << MAX << endl;
}