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
  int N,M;
  cin >> N >> M;
  vector<P> A(M);
  vector<set<int>> B(N,set<int> ());
  REP(i,M){
    cin >> A[i].first >> A[i].second;
    A[i].first--;
    A[i].second--;
    B[A[i].first].insert(A[i].second);
    B[A[i].second].insert(A[i].first);
  }
  
  vector<set<int>> C(N);
  C=B;

  REP(i,N){
    for(auto x:B.at(i)){
      for(auto y:B.at(x)){
        C.at(i).insert(y);
      }
    }
  }



  REP(i,N){
    if(C.at(i).size()!=0){
      cout << C.at(i).size()-B.at(i).size()-1 << endl;
    }else{
      cout << 0 << endl;
    }
  }
}