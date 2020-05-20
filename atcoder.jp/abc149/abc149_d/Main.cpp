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
  int N,K,R,S,P;
  cin >> N >> K >> R >> S >>P;
  string T;
  cin >> T;

  int ans = 0;
  REP(i,N){
    if(i<K){
      if(T.at(i)=='r'){
        ans+=P;
      }else if(T.at(i)=='s'){
        ans+=R;
      }else{
        ans+=S;
      }
    }else{
      if(T.at(i)=='r'&&T.at(i-K)!='r'){
        ans+=P;
      }else if(T.at(i)=='s'&&T.at(i-K)!='s'){
        ans+=R;
      }else if(T.at(i)=='p'&&T.at(i-K)!='p'){
        ans+=S;
      }else if(T.at(i)=='r'&&T.at(i-K)=='r'){
        T.at(i)='a';
      }else if(T.at(i)=='s'&&T.at(i-K)=='s'){
        T.at(i)='a';
      }else if(T.at(i)=='p'&&T.at(i-K)=='p'){
        T.at(i)='a';
      }
    }
  }

  cout << ans << endl;
}