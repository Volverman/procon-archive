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

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main()
{
  int H,W,x1,y1,x2,y2;
  cin >> H >> W >> y1 >> x1 >> y2 >> x2;
  x1--;
  y1--;
  x2--;
  y2--;

  vector<string> A(H);
  REP(i, H) cin >> A[i];
  queue<P> que;
  que.push(make_pair(y1,x1));
  vector<vector<int>> dist(H,vector<int> (W,-1));
  dist[y1][x1]=0;

  while(!que.empty()){
    int vy = que.front().first;
    int vx = que.front().second;
    que.pop();
    REP(i,4){
      int nvx = vx+dx[i];
      int nvy = vy+dy[i];
      if(A.at(nvy).at(nvx)=='#'||dist[nvy][nvx]!=-1) continue;
      dist[nvy][nvx]=dist[vy][vx]+1;
      que.push(make_pair(nvy,nvx));
    }
  }

  cout << dist[y2][x2] << endl;
}