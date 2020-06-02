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
  int H,W;
  cin >> H >> W;
  vector<string> A(H);
  REP(i, H) cin >> A[i];
  
  int MAXans = 0;
  REP(i,H){
    REP(j,W){
      if(A.at(i).at(j)=='#'){
        continue;
      }
      vector<vector<int>> dist(H,vector<int>(W,-1));
      dist[i][j]=0;
      queue<P> que;
      que.push(make_pair(i,j));
      while(que.empty()==0){
        pair<int,int> v = que.front();
        que.pop();
        REP(k,4){
          if(v.first+dy[k]<0||v.second+dx[k]<0||v.first+dy[k]>H-1||v.second+dx[k]>W-1||A.at(v.first+dy[k]).at(v.second+dx[k])=='#'||dist.at(v.first+dy[k]).at(v.second+dx[k])!=-1){
            continue;
          }
          dist.at(v.first+dy[k]).at(v.second+dx[k])=dist.at(v.first).at(v.second)+1;
          que.push(make_pair(v.first+dy[k],v.second+dx[k]));
        }
      }
      int MAX = 0;
      REP(k,H){
        REP(l,W){
          MAX=max(MAX,dist.at(k).at(l));
        }
      }
      MAXans=max(MAXans,MAX);
    }
  }

  cout << MAXans << endl;
}