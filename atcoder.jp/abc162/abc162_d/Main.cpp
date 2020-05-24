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
  int N;
  string S;
  cin >> N >> S;

  vector<int> R(N);
  vector<int> G(N);
  vector<int> B(N);
  int r=0;
  int g=0;
  int b=0;
  REPR(i,N-1){
    if(S.at(i)=='R'){
      r++;
      R[i]=r;
      G[i]=g;
      B[i]=b;
    }else if(S.at(i)=='G'){
      g++;
      R[i]=r;
      G[i]=g;
      B[i]=b;
    }else{
      b++;
      R[i]=r;
      G[i]=g;
      B[i]=b;
    }
  }

  ll ans = 0;
  REP(i,N-2){
    FOR(j,i+1,N-1){
      if((S.at(i)=='R'&&S.at(j)=='G')||(S.at(i)=='G'&&S.at(j)=='R')){
        if(2*j-i<N-1){
          ans+=B[j+1]-B[2*j-i]+B[2*j-i+1];
        }else if(2*j-i==N-1){
          ans+=B[j+1]-B[2*j-i];
        }else{
          ans+=B[j+1];
        }
      }else if((S.at(i)=='B'&&S.at(j)=='G')||(S.at(i)=='G'&&S.at(j)=='B')){
        if(2*j-i<N-1){
          ans+=R[j+1]-R[2*j-i]+R[2*j-i+1];
        }else if(2*j-i==N-1){
          ans+=R[j+1]-R[2*j-i];
        }else{
          ans+=R[j+1];
        }
      }else if((S.at(i)=='R'&&S.at(j)=='B')||(S.at(i)=='B'&&S.at(j)=='R')){
        if(2*j-i<N-1){
          ans+=G[j+1]-G[2*j-i]+G[2*j-i+1];
        }else if(2*j-i==N-1){
          ans+=G[j+1]-G[2*j-i];
        }else{
          ans+=G[j+1];
        }
      }
    }
  }

  cout << ans << endl;
}