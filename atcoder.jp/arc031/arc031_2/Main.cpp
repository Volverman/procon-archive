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

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main()
{
  vector<string> A(10);
  REP(i, 10) cin >> A[i];
  
  int x = 0;
  int y = 0;
  int cnt = 0;
  REP(i,10){
    REP(j,10){
      if(A.at(i).at(j)=='o'){
        cnt++;
        x=j;
        y=i;
      }
    }
  }

  int flag = 0;
  REP(i,10){
    REP(j,10){
      vector<string> B=A;
      B.at(i).at(j)='o';
      queue<P> que;
      que.push(make_pair(y,x));
      vector<vector<int>> dist(10,vector<int> (10,-1));
      dist[y][x]=0;
      int cnt2 = 1;
      while(!que.empty()){
        int vy = que.front().first;
        int vx = que.front().second;
        que.pop();
        REP(k,4){
          int nvy = vy+dy[k];
          int nvx = vx+dx[k];
          if(nvy<0||nvx<0||nvy>9||nvx>9||B[nvy][nvx]=='x'||dist[nvy][nvx]!=-1) continue;
          que.push(make_pair(nvy,nvx));
          dist[nvy][nvx]=0;
          cnt2++;
        }
      }
      if(A.at(i).at(j)=='o'&&cnt2==cnt){
        flag=1;
      }else if(A.at(i).at(j)=='x'&&cnt2==cnt+1){
        flag=1;
      }
    }
  }

  if(flag==0){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }
}