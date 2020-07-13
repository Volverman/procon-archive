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
  vector<int> vec;

  REP(i,N){
    if(A.at(i)!=0){
      vec.push_back(A[i]);
    }
  }
  if(vec.size()!=0){
    sort(ALL(vec));
    reverse(ALL(vec));
  }
  int Q;
  cin >> Q;
  vector<int> B(Q);
  REP(i, Q) cin >> B[i];

  REP(i,Q){
    if(vec.size()!=0&&B[i]<=vec.size()-1){
      cout << vec[B[i]]+1 << endl;
    }else{
      cout << 0 << endl;
    }
  }
}