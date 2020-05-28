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
  string S,T;
  cin >> S >> T;

  int flag = 0;
  REP(i,S.size()){
    if(S.at(i)!='@'&&T.at(i)!='@'&&S.at(i)!=T.at(i)){
      flag=1;
    }else if(S.at(i)=='@'&&T.at(i)!='@'&&(T.at(i)!='a'&&T.at(i)!='t'&&T.at(i)!='c'&&T.at(i)!='o'&&T.at(i)!='d'&&T.at(i)!='e'&&T.at(i)!='r')){
      flag=1;
    }else if(T.at(i)=='@'&&S.at(i)!='@'&&(S.at(i)!='a'&&S.at(i)!='t'&&S.at(i)!='c'&&S.at(i)!='o'&&S.at(i)!='d'&&S.at(i)!='e'&&S.at(i)!='r')){
      flag=1;
    }
  }
  if(flag==1){
    cout << "You will lose" << endl;
  }else{
    cout << "You can win" << endl;
  }
}