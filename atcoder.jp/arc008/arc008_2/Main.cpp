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
  int N,M;
  cin >> N >> M;
  string name,kit;
  cin >> name >> kit;

  map<char,int> mp;
  REP(i,M){
    mp[kit[i]]++;
  }

  map<char,int> mp2;
  REP(i,N){
    mp2[name[i]]++;
  }

  int MAX = 0;
  int flag = 0;
  for(auto x:mp2){
    if(mp[x.first]==0){
      flag=1;
      break;
    }else{
      if(x.second%mp[x.first]==0){
        MAX=max(MAX,x.second/mp[x.first]);
      }else{
        MAX=max(MAX,x.second/mp[x.first]+1);
      }
    }
  }

  if(flag==1){
    cout << -1 << endl;
  }else{
    cout << MAX << endl;
  }
}