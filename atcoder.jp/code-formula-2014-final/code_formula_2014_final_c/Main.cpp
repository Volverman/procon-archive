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
  string str, s;

  getline(cin,str);

  map<string,int> mp;
  REP(i,str.size()-1){
    if(str.at(i)=='@'){
      if(str.at(i+1)=='@'||str.at(i+1)==' '){
        continue;
      }else{
         int j=1;
        while(j!=str.size()-i&&(str.at(i+j)!='@'&&str.at(i+j)!=' ')){
          j++;
        }
        mp[str.substr(i+1,j-1)]++;
      }
    }
  }
  for(auto x:mp){
    cout << x.first << endl;
  }
}