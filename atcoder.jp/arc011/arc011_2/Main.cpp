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

int x[26]={-1,1,1,2,-1,4,9,8,-1,3,8,5,7,9,-1,7,4,0,6,3,-1,5,2,6,-1,0};

int main()
{
  int N;
  cin >> N;
  vector<string> A(N);
  REP(i, N) cin >> A[i];
  
  REP(i,N){
    REP(j,A[i].size()){
      if(A[i][j]>='A'&&A[i][j]<='Z'){
        A[i][j]=A[i][j]-'A'+'a';
      }
    }
  }

  string ans = "";
  REP(i,N){
    int flag = 0;
    REP(j,A[i].size()){
      if(A[i][j]<='z'&&A[i][j]>='a'&&x[A[i][j]-'a']!=-1){
        ans+=x[A[i][j]-'a']+'0';
        flag = 1;
      }
    }
    if(flag==1&&i!=N-1){
      ans+=" ";
    }
  }
  if(ans.size()!=0&&ans.at(ans.size()-1)==' '){
    ans=ans.substr(0,ans.size()-1);
  }
  cout << ans << endl;
}