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
  vector<char> A(10);
  REP(i, 10) cin >> A[i];
  int N;
  cin >> N;
  vector<string> B(N);
  vector<P> ans(N);
  REP(i, N){
    cin >> B[i];
    ans.at(i).second=stoi(B[i]);
  }
  
  REP(i,N){
    REP(j,B[i].size()){
      REP(k,10){
        if(B[i][j]==A[k]){
          B[i][j]=k+'0';
          break;
        }
      }
    }
    ans.at(i).first=stoi(B[i]);
  }
  
  sort(ALL(ans));
  REP(i,N){
    cout << ans.at(i).second << endl;
  }
}