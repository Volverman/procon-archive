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
  ll N,M;
  cin >> N >> M;

  vector<pair<ll,string>> A(M);
  REP(i, M){
    cin >> A.at(i).first >> A.at(i).second;
  }
  ll wa= 0;
  ll ac = 0;

  vector<int> B(N,0);
  vector<int> C(N,0);

  REP(i,M){
    if(A.at(i).second == "WA"){
      if(B.at(A.at(i).first-1) == 0){
        C.at(A.at(i).first-1)++;
      }
    }else if(A.at(i).second == "AC"){
      if(B.at(A.at(i).first-1)==0){
        wa+=C.at(A.at(i).first-1);
        ac++;
        B.at(A.at(i).first-1) = 1;
      }
    }
  }

  cout << ac << " " << wa << endl;
}