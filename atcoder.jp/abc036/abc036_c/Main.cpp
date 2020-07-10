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
  map<int,int> mp;
  REP(i, N){
    cin >> A[i];
  }

  vector<int> B=A;
  sort(ALL(B));
  int cnt = 1;
  REP(i,N-1){
    mp[B[i]]=cnt;
    if(B.at(i)!=B.at(i+1)){
      cnt++;
    }
  }
  mp[B[N-1]]=cnt;

  REP(i,N){
    cout << mp[A[i]]-1 << endl;
  }
}