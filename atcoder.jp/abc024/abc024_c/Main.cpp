#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<ll,ll>;

int main()
{
  ll N,D,K;
  cin >> N >> D >> K;
  vector<P> A(D);
  REP(i,D) cin >> A[i].first >> A[i].second;
  vector<P> B(K);
  REP(i,K) cin >> B[i].first >> B[i].second;
  
  REP(i,K){
    ll now = B.at(i).first;
    ll to = B.at(i).second;
    ll ans = 0;
    if(B.at(i).first<B.at(i).second){
      REP(j,D){
        if(now>=A.at(j).first&&now<=A.at(j).second&&to>A.at(j).second){
          now=A.at(j).second;
        }else if(now>=A.at(j).first&&now<=A.at(j).second&&to>=A.at(j).first&&to<=A.at(j).second){
          ans=j+1;
          break;
        }
      }
      cout << ans << endl;
    }else{
      REP(j,D){
        if(now>=A.at(j).first&&now<=A.at(j).second&&to<A.at(j).first){
          now=A.at(j).first;
        }else if(now>=A.at(j).first&&now<=A.at(j).second&&to>=A.at(j).first&&to<=A.at(j).second){
          ans=j+1;
          break;
        }
      }
      cout << ans << endl;
    }
  }
}