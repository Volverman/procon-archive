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

  int x=-1,y=-1,z=-1;
  REP(i,N){
    if((M-2*N-i)%2==0&&(M-2*N-i)/2>=0&&(M-2*N-i)/2<=N){
      if(N-i-(M-2*N-i)/2>=0&&N-i-(M-2*N-i)/2<=N){
        x=N-i-(M-2*N-i)/2;
        y=i;
        z=(M-2*N-i)/2;
      }
    }
  }

  cout << x << " " << y << " " << z << endl;
}