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
  map<char,int> mp;
  REP(i,S.size()){
    mp[S.at(i)]++;
  }
  int cnt = 0;
  for(auto x:mp){
    if(x.second%2==1){
      cnt++;
    }
  }
  if(cnt>0){
    cout << (((S.size()-cnt)/2)/cnt)*2+(cnt>0) << endl;
  }else{
    cout << S.size() << endl;
  }
}