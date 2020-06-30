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
  int T,N;
  cin >> T >> N;
  vector<int> A(N);
  map<int,int> mp; 
  REP(i, N){
    cin >> A[i];
    mp[A[i]]++;
  }
  int M;
  cin >> M;
  vector<int> B(M);
  REP(i, M) cin >> B[i];
  
  if(M>N){
    cout << "no" << endl;
  }else{
    int flag = 0;
    REP(i,M){
      int flag2 = 0;
      REPR(j,T){
        if(mp[B[i]-j]>0){
          mp[B[i]-j]--;
          flag2=1;
          break;
        }
      }
      if(flag2==0){
        flag=1;
      }
    }

    if(flag==1){
      cout << "no" << endl;
    }else{
      cout << "yes" << endl;
    }
  }
}