#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int pow(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int dfs(vector<int> A,int &cnt){
  if(A.size() == 1 && A.at(0) == 1){
    return cnt + 1;
  }
  cnt += (A.at(0)-1)*pow(A.size()-1);
  vector<int> B(A.size()-1);
  REP(i,A.size()-1){
    if(A.at(i+1) > A.at(0)){
      B.at(i) = A.at(i+1) - 1;
    }else{
      B.at(i) = A.at(i+1);
    }
  }
  dfs(B,cnt);
  return cnt;
}

int main()
{
  int N;
  cin >> N;
  vector<int> P(N);
  REP(i, N) cin >> P[i];
  vector<int> Q(N);
  REP(i, N) cin >> Q[i];
  
  int cnt = 0;
  int p = dfs(P,cnt);
  cnt = 0;
  int q = dfs(Q,cnt);

  cout << max(p-q,q-p) << endl;
}