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
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  
  int MAXcnt = 0;
  int cnt = 1;
  int flag = A[0];
  int flag2 = 0;
  int x = 0;
  FOR(i,1,N){
    if(flag==A[i]){
      cnt++;
    }else{
      flag=A[i];
      MAXcnt=max(MAXcnt,cnt);
      if(flag2==0){
        x=cnt;
        flag2=1;
      }
      cnt=1;
    }
  }
  if(flag==A[0]&&flag2==1){
    MAXcnt=max(MAXcnt,x+cnt);
  }else{
    MAXcnt=max(MAXcnt,cnt);
  }
  
  if(MAXcnt==N){
    cout << -1 << endl;
  }else{
    cout << (MAXcnt+1)/2 << endl;
  }
}