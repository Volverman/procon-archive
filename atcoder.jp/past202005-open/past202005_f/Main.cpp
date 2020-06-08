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
  vector<string> A(N);
  REP(i, N) cin >> A[i];
  
  
  string ans = "";
  if(N%2==1){
    ans+=A.at((N-1)/2).at(0);
  }
  REPR(i,N/2-1){
    int flag = 0;
    set<char> st;
    REP(j,N){
      st.insert(A.at(i).at(j));
    }
    set<char> st2;
    REP(j,N){
      st2.insert(A.at(N-1-i).at(j));
    }
    for(auto x:st){
      if(st2.count(x)==1){
        ans=x+ans+x;
        flag = 1;
        break;
      }
    }
    if(flag == 0){
      ans = "-1";
      break;
    }
  }

  cout << ans << endl;
}