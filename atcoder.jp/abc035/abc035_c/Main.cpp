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
  int N,Q;
  cin >> N >> Q;

  vector<int> ans(N+1,0);
  vector<P> A(Q);
  REP(i,Q){
    cin >> A[i].first >> A[i].second;
    A[i].first--;
    A[i].second--;
    ans.at(A[i].first)++;
    ans.at(A[i].second+1)--;
  }
  
  int sum = 0;
  vector<int> ans2;
  REP(i,N+1){
    sum+=ans[i];
    ans2.push_back(sum);
  }

  REP(i,N){
    cout << ans2.at(i)%2;
  }

  cout << endl;
}