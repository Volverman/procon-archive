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
  string s,str;
  getline(cin,s);
  stringstream ss{s};
  vector<string> A;

  while(getline(ss,str,' ')){
    if(str!=""){
      A.push_back(str);
    }
  }

  REP(i,A.size()){
    if(i!=A.size()-1){
      cout << A[i] << ',';
    }else{
      cout << A[i];
    }
  }
  cout << endl;
}