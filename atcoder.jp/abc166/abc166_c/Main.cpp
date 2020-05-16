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
  ll N, M;
  cin >> N >> M;
  vector<ll> H(N);
  REP(i, N) cin >> H[i];
  vector<P> A(M);
  REP(i,M) cin >> A[i].first >> A[i].second;
  
  set<ll> B;
  set<ll> C;
  set<ll> D;
  REP(i,M){
    C.insert(A.at(i).first);
    C.insert(A.at(i).second);
    if(H.at(A.at(i).first-1)>H.at(A.at(i).second-1)){
      if(D.count(A.at(i).first)==0){
        B.insert(A.at(i).first);
      }
      B.erase(A.at(i).second);
      D.insert(A.at(i).second);
    }else if(H.at(A.at(i).first-1)<H.at(A.at(i).second-1)){
      if(D.count(A.at(i).second)==0){
        B.insert(A.at(i).second);
      }
      B.erase(A.at(i).first);
      D.insert(A.at(i).first);
    }else if(H.at(A.at(i).first-1)==H.at(A.at(i).second-1)){
      B.erase(A.at(i).second);
      B.erase(A.at(i).first);
      D.insert(A.at(i).first);
      D.insert(A.at(i).second);
    }
  }

  ll cnt=0;
  FOR(i,1,N+1){
    if(C.count(i)==0){
      cnt++;
    }else if(B.count(i)==1){
      cnt++;
    }
  }
  cout << cnt << endl;
}