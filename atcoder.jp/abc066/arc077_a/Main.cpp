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
  int n;
  cin >> n;

  vector<int> a(n);
  REP(i, n) cin >> a[i];
  
  int b[n];
  if(n%2==0){
    REP(i,n/2){
      b[i+n/2]=a[i*2];
    }
    REP(i,n/2){
      b[i]=a[n-i*2-1];
    }
  }else{
    REP(i,n/2){
      b[i+n/2+1]=a[i*2+1];
    }
    REP(i,n/2+1){
      b[i]=a[n-i*2-1];
    }
  }
  REP(i,n){
    cout << b[i];
    if(i!=n-1){
      cout << " ";
    }
  }
  cout << endl;
}