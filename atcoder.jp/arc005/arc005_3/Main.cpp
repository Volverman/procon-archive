#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REP2(i, a, b) for(int i = a;i <= b;i++)
#define REPR(i, a, b) for(int i = a; i >= b; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define PI 3.14159265358979323846
#define vi vector<int>
#define vll vector<ll>
#define vi2 vector<vector<int>>
#define eb emplace_back
#define fi first
#define se second
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
using P = pair<ll,ll>;
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1}, dy[]{1, 0, -1, 0, -1, 1, -1, 1};
#define INT(name) int name;cin >> name;
#define VEC(type,name,n) vector<type> name(n);REP(i,n) cin >> name[i];

template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

int main()
{
  INT(H);
  INT(W);
  vector<string> A(H);
  vector<vector<int>> vec(H,vector<int> (W,INF));
  P s,g;
  REP(i, H){
    cin >> A[i];
    REP(j,W){
      if(A[i][j]=='s'){
        s={i,j};
      }
      if(A[i][j]=='g'){
        g={i,j};
      }
    }
  }
  vec[s.fi][s.se]=0;
  REP(i,3){
    int flag=0;
    REP(j,H){
      REP(k,W){
        if(vec[j][k]==i){
          queue<P> que;
          que.push({j,k});
          vector<vector<int>> dist(H,vector<int> (W,-1));
          while(!que.empty()){
            int vy=que.front().fi;
            int vx=que.front().se;
            que.pop();
            REP(l,4){
              int nvy=vy+dy[l];
              int nvx=vx+dx[l];
              if(nvy<0||nvy>H-1||nvx<0||nvx>W-1||dist[nvy][nvx]!=-1||A[nvy][nvx]=='#') continue;
              que.push({nvy,nvx});
              dist[nvy][nvx]=0;
              chmin(vec[nvy][nvx],i);
            }
          }
          flag=1;
          break;
        }
      }
      if(flag==1){
        break;
      }
    }

    REP(j,H){
      REP(k,W){
        REP(l,4){
          if(vec[j][k]==i){
            int nvy=j+dy[l];
            int nvx=k+dx[l];              
            if(nvy<0||nvy>H-1||nvx<0||nvx>W-1) continue;
            if(A[nvy][nvx]=='#'){
              A[nvy][nvx]='.';
              chmin(vec[nvy][nvx],i+1);
            }
          }
        }
      }
    }
  }

  // REP(i,H){
  //   REP(j,W){
  //     if(vec[i][j]>1000){
  //       cout << "i ";
  //     }else{
  //       cout << vec[i][j] << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  if(vec[g.fi][g.se]<=2){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
