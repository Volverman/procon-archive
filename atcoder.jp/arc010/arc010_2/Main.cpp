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

int dif[12]={0,1,0,1,1,2,2,3,4,4,5,5};

int main()
{
  int N;
  cin >> N;
  vector<string> A(N);
  vector<int> day(N);
  REP(i, N){
    cin >> A[i];
    int m;
    int d;
    int x;
    REP(j,A[i].size()){
      if(A[i][j]=='/'){
        x=j;
      }
    }
    m=stoi(A[i].substr(0,x));
    d=stoi(A[i].substr(x+1));
    day[i] = 30*(m-1)+d;
    day[i]+=dif[m-1];
  }
  
  int furi = 0;
  vector<bool> kyuujitu(367,false);
  FOR(i,1,367){
    if(i%7==0||i%7==1){
      kyuujitu[i]=true;
    }
  }
  sort(ALL(day));
  REP(i,N){
    if(kyuujitu[day[i]]==true){
      int cnt = day[i];
      while(kyuujitu[cnt]==true){
        cnt++;
      }
      if(cnt<=366){
        kyuujitu[cnt]=true;
      }
    }else{
      kyuujitu[day[i]]=true;
    }
  }

  int ans = 0;
  int cnt2 = 0;
  FOR(i,1,367){
    if(kyuujitu[i]==true){
      cnt2++;
    }else{
      ans=max(ans,cnt2);
      cnt2=0;
    }
  }
  ans=max(ans,cnt2);

  cout << ans << endl;
}
