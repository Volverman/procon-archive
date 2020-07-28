#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  int N;
  cin >> N;
  vector<string> A(N);
  REP(i, N) cin >> A[i];

  int ans = 0;
  REP(i,N){
    int maxx = -1;
    REP(j,N){
      if(A[i][j]=='.'){
        maxx=j;
      }
    }
    if(maxx!=-1){
      ans++;
      if(i!=N-1){
        FOR(j,maxx,N){
          A[i+1][j]='o';
        }
      }
    }
  }

  cout << ans << endl;
}