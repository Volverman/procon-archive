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
  cin >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  if(N<=2){
    cout << N << endl;
  }else{
    vector<int> tani;
    tani.push_back(0);
    REP(i,N-2){
      if(A[i]>A[i+1]&&A[i+1]<A[i+2]){
        tani.push_back(i+1);
      }
    }
    tani.push_back(N-1);

    int MAX = 0;
    REP(i,tani.size()-1){
      MAX=max(MAX,tani.at(i+1)-tani.at(i)+1);
    }

    cout << MAX << endl;
  }
}