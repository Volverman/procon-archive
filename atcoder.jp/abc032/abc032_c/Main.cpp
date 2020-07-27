#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  int flag = 0;
  REP(i, N){
    cin >> A[i];
    if(A[i]==0){
      flag=1;
    }
  }
  
  if(flag==0){
    int right=0;
    ll sum = 1;
    int MAX = 0;
    REP(left,N){
      while(right<N&&sum*A[right]<=K){
        sum*=A[right];
        right++;
      }
      MAX=max(MAX,right-left);
      if(right==left){
        right++;
      }else{
        if(A[left]!=0){
          sum/=A[left];
        }
      }
    }

    cout << MAX << endl;
  }else{
    cout << N << endl;
  }
}