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
  ll N,K;
  cin >> N >> K;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  
  ll left=0;
  ll right=0;
  ll sum = 0;
  ll cnt=0;
  REP(i,N){
    left=i;
    while(sum+A[right]<K&&right<=N-1){
      sum+=A[right];
      right++;
    }
    cnt+=right-1-left+1;
    if(right==left){
      right++;
    }else{
      sum-=A[left];
    }
  }
  cout << N*(N+1)/2-cnt << endl;
}