#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int N,M;
vector<vector<int>> A(60,vector<int>());
vector<int> B(60);
vector<int> base(20);

int combobonus(vector<int> D){
  int sum = 0;
  REP(i,M){
    int cnt = 0;
    for(auto x:A[i]){
      if(find(ALL(D),x)!=D.end()){
        cnt++;
      }
    }
    if(cnt>=3){
      sum+=B[i];
    }
  }
  return sum;
}

int dfs(vector<int> E,int score){
  if(E.size()==9){
    score+=combobonus(E);
    return score;
  }
  int MAXscore=0;
  int finmem=-1;
  if(E.size()>0){
    finmem=E[E.size()-1];
  }
  FOR(i,finmem+1,N-(9-sz(E))+1){
    vector<int> F=E;
    int scorecopy = score;
    F.push_back(i);
    scorecopy+=base[i];
    MAXscore=max(MAXscore,dfs(F,scorecopy));
  }
  return MAXscore;
}

int main()
{
  cin >> N >> M;
  REP(i, N) cin >> base[i];
  
  vector<int> C(M);
  REP(i, M){
    cin >> B[i];
    cin >> C[i];
    REP(j,C[i]){
      int x;
      cin >> x;
      x--;
      A[i].push_back(x);
    }
  }
  
  vector<int> X(0);
  int ansscore=0;
  cout << dfs(X,0) << endl;
}