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
  string s;
  cin >> s;
  int k;
  cin >> k;
  if(k<=s.size()){
    set<string> st;
    REP(i,s.size()-k+1){
      st.insert(s.substr(i,k));
    }
    cout << st.size() << endl;
  }else{
    cout << 0 << endl;
  }
}