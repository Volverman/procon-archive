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
  INT(id);
  INT(N);
  INT(K);
  vector<string> B(N);
  REP(i, N) cin >> B[i];
  vector<vector<int>> ans(0,vector<int>(3));
  vector<vector<int>> ans3(0,vector<int>(3));
  int flag = 0;
  while(flag==0){
    flag=1;
    REP(i,N){
      REP(j,N){
        int cnt = 0;
        map<int,int> mp;
        REP(k,4){
          int nvy=i+dy[k];
          int nvx=j+dx[k];
          if(nvy<0||nvy>N-1||nvx<0||nvx>N-1)continue;
          mp[B[nvy][nvx]-'0']++;
        }
        for(auto x:mp){
          if(x.se>=3&&B[i][j]!=x.fi+'0'){
            ans3.push_back({i+1,j+1,x.fi});
            B[i][j]=x.fi+'0';
            flag=0;
          }
        }
      }
    }
  }
  REP2(i,1,K){
    vector<string> A=B;
    vector<vector<int>> ans2(0,vector<int>(3));
    ans2=ans3;
    int flag2=0;
    while(flag2==0){
      flag2=1;
      REP(j,N){
        REP(k,N){
          int cnt = 0;
          REP(l,4){
            int nvy=j+dy[l];
            int nvx=k+dx[l];
            if(nvy<0||nvy>N-1||nvx<0||nvx>N-1)continue;
            if(A[nvy][nvx]==i+'0')cnt++;
          }
          if(cnt>=3&&A[j][k]!=i+'0'){
            ans2.push_back({j+1,k+1,i});
            A[j][k]=i+'0';
            flag2=0;
          }
        }
      }
    }
    REP(j,N){
      REP(k,N){
        if(A[j][k]!=i+'0'){
          ans2.push_back({j+1,k+1,i});
          int prev=A[j][k]-'0';
          queue<P> que;
          que.push({j,k});
          vector<vector<int>> dist(N,vector<int>(N,-1));
          dist[j][k]=0;
          while(!que.empty()){
            int vy=que.front().fi;
            int vx=que.front().se;
            que.pop();
            REP(l,4){
              int nvy=vy+dy[l];
              int nvx=vx+dx[l];
              if(nvy<0||nvy>N-1||nvx<0||nvx>N-1||dist[nvy][nvx]!=-1||A[nvy][nvx]!=prev+'0')continue;
              dist[nvy][nvx]=dist[vy][vx]+1;
              que.push({nvy,nvx});
              A[nvy][nvx]=i+'0';
            }
          }
        }
      }
    }

    if(i==1){
      ans=ans2;
    }else if(sz(ans2)<sz(ans)){
      ans=ans2;
    }
  }

  cout << sz(ans) << endl;
  REP(i,sz(ans)){
    cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
  }
}
