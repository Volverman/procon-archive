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
  int N,L;
  cin >> N >> L;
  string s;
  getline(cin,s);
  vector<string> A(L);
  REP(i, L){
    string str;
    getline(cin,str);
    A[i]=str;
  }
  string S;
  getline(cin,S);

  vector<int> B(N);
  REP(i,N){
    B[i]=i+1;
  }

  REP(i,L){
    REP(j,2*N-1){
      if(A.at(i).at(j)=='-'){
        swap(B.at(j/2),B.at(j/2+1));
      }
    }
  }

  REP(i,S.size()){
    if(S.at(i)=='o'){
      cout << B[i/2] << endl;
    }
  }
}