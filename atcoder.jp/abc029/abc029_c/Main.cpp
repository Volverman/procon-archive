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

  REP(i,pow(3,N)){
    int x = i;
    string s = "";
    REP(i,N){
      if(x%3==0){
        s.push_back('a');
      }else if(x%3==1){
        s.push_back('b');
      }else{
        s.push_back('c');
      }
      x/=3;
    }
    reverse(ALL(s));
    cout << s << endl;
  }
}