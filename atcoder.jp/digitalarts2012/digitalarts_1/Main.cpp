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
  string S,s;
  getline(cin,S);
  stringstream ss{S};
  vector<string> str;
  while(getline(ss,s,' ')){
    str.push_back(s);
  }
  int N;
  cin >> N;
  vector<string> A(N);
  REP(i, N) cin >> A[i];
  
  REP(i,str.size()){
    REP(j,N){
      if(A.at(j).size()==str.at(i).size()){
        int flag = 0;
        REP(k,A.at(j).size()){
          if(A.at(j).at(k)!='*'&&str.at(i).at(k)!='*'&&A.at(j).at(k)!=str.at(i).at(k)){
            flag=1;
            break;
          }
        }
        if(flag==0){
          REP(k,A.at(j).size()){
            str.at(i).at(k)='*';
          }
        }
      }
    }
  }

  REP(i,str.size()){
    if(i!=str.size()-1){
      cout << str[i] << " ";
    }else{
      cout << str[i];
    }
  }
  cout << endl;
}