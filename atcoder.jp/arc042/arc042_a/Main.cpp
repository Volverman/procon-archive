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
  vector<int> A(M);
  REP(i, M){
    cin >> A[i];
    A[i]--;
  }
  
  vector<bool> list(N,true);
  vector<int> ans;
  REPR(i,M-1){
    if(list[A[i]]==true){
      ans.push_back(A[i]);
      list[A[i]]=false;
    }
  }
  REP(i,N){
    if(list[i]==true){
      ans.push_back(i);
    }
  }

  REP(i,N){
    cout << ans.at(i)+1 << endl;
  }
}