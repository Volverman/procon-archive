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
  string S;
  cin >> S;
  int Q;
  cin >> Q;
  int flag = 0;
  int cnt = 0;
  string A="";
  string B="";
  REP(i,Q){
    int T,F;
    string C;
    cin >> T;
    if(T==2){
      cin >> F >> C;
    }
    if(T==1){
      if(flag == 0){
        flag = 1;
      }else{
        flag = 0;
      }
    }else{
      if(F==1){
        if(flag==0){
          A=C+A;
        }else{
          B=B+C;
        }
      }else{
        if(flag==0){
          B=B+C;
        }else{
          A=C+A;
        }
      }
    }
  }
  if(flag == 0){
    cout << A+S+B << endl;
  }else{
    reverse(ALL(A));
    reverse(ALL(B));
    reverse(ALL(S));
    cout << B+S+A << endl;
  }
}