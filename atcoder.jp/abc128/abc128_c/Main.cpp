#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<int,vector<int>>;

int main()
{
  int N,M;
  cin >> N >> M;

  vector<P> A(M);
  REP(i,M){
    cin >> A[i].first;
    REP(j,A[i].first){
      int z;
      cin >> z;
      A[i].second.push_back(z);
    }
  }
  vector<int> p(M);
  REP(i, M) cin >> p[i];
  
  int cnt2 = 0;
  REP(i,pow(2,N)){
    int flag = 0;
    int x = i;
    vector<int> B(N);
    REP(j,N){
      B[j] = x%2;
      x/=2;
    }
    REP(j,M){
      int cnt = 0;
      REP(k,A[j].first){
        if(B[A[j].second[k]-1]==1){
          cnt++;
        }
      }
      if(cnt%2!=p[j]){
        flag = 1;
        break;
      }
    }
    if(flag == 0){
      cnt2++;
    }
  }

  cout << cnt2 << endl;
}