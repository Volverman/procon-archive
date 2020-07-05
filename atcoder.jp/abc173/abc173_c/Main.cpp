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
  int H,W,K;
  cin >> H >> W >> K;
  vector<string> A(H);
  REP(i, H) cin >> A[i];

  int cnt2 = 0;
  REP(i,1<<H){
    REP(j,1<<W){
      int cnt = 0;
      int y = i;
      REP(k,H){
        int x = j;
        REP(l,W){
          if(x%2==0&&y%2==0&&A.at(k).at(l)=='#'){
            cnt++;
          }
          x/=2;
        }
        y/=2;
      }
      if(cnt==K){
        cnt2++;
      }
    }
  }

  cout << cnt2 << endl;
}