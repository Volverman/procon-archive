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
  ll n;
  cin >> n;
  vector<ll> A(n);
  REP(i, n) cin >> A[i];
  sort(ALL(A));
  cout << A[n-1] << " ";
  ll MAX1=A[0];
  ll MAX2=A[n-2];
  if(A[n-1]%2==1){
    REP(i,n-1){
      if(A[i]<=A[n-1]/2){
        MAX1=max(MAX1,A[i]);
      }else if(A[i]>=A[n-1]/2+1){
        MAX2=min(MAX2,A[i]);
      }
    }
    if(A[n-1]/2-MAX1<MAX2-(A[n-1]/2+1)){
      cout << MAX1 << endl;
    }else{
      cout << MAX2 << endl;
    }
  }else{
    REP(i,n-1){
      if(A[i]<=A[n-1]/2){
        MAX1=max(MAX1,A[i]);
      }else if(A[i]>=A[n-1]/2){
        MAX2=min(MAX2,A[i]);
      }
    }
    if(A[n-1]/2-MAX1<MAX2-A[n-1]/2){
      cout << MAX1 << endl;
    }else{
      cout << MAX2 << endl;
    }
  }
}