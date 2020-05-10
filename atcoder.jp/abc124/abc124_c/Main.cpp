#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
 
int main()
{
  string s;
  cin >> s;
  vector<int> S(s.size());
  REP(i,S.size()){
    S.at(i) = s.at(i) - '0';
  }

  vector<int> A(S.size());
  vector<int> B(S.size());
  REP(i,S.size()){
    if(i%2 == 0){
      A.at(i) = 0;
      B.at(i) = 1;
    }else{
      A.at(i) = 1;
      B.at(i) = 0;
    }
  }

  int cnt1 = 0;
  int cnt2 = 0;
  REP(i,S.size()){
    if(S.at(i) == A.at(i)){
      cnt1++;
    }else if(S.at(i) == B.at(i)){
      cnt2++;
    }
  }
  cout << min(cnt1,cnt2) << endl;
}