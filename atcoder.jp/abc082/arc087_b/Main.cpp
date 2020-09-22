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

bool dpx[4000][16000]={false};
bool dpy[4000][16000]={false};
int main()
{
  string S;
  cin >> S;
  int x,y;
  cin >> x >> y;
  int cnt = 0;
  int flag = 0;
  deque<int> X;
  vector<int> Y;
  REP(i,sz(S)){
    if(S[i]=='F'){
      cnt++;
    }else{
      if(flag==0){
        X.push_back(cnt);
        cnt=0;
        flag=1;
      }else{
        Y.push_back(cnt);
        cnt=0;
        flag=0;
      }
    }
  }
  if(flag==0){
    X.push_back(cnt);
  }else{
    Y.push_back(cnt);
  }
  x-=X[0];
  X.pop_front();

  // REP(i,10){
  //   REP(j,10){
  //     cout << dpx[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  dpx[0][8000]=true;
  dpy[0][8000]=true;
  REP(i,sz(X)){
    REP(j,16000){
      if(dpx[i][j]==true){
        dpx[i+1][j+X[i]]=true;
        dpx[i+1][j-X[i]]=true;
      }
    }
  }
  REP(i,sz(Y)){
    REP(j,16000){
      if(dpy[i][j]==true){
        dpy[i+1][j+Y[i]]=true;
        dpy[i+1][j-Y[i]]=true;
      }
    }
  }
  if(dpx[sz(X)][x+8000]&&dpy[sz(Y)][y+8000]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  // sort(ALL(X));
  // sort(ALL(Y));
  // reverse(ALL(X));
  // reverse(ALL(Y));
  // int sumx=0;
  // REP(i,sz(X)){
  //   if(sumx<x){
  //     sumx+=X[i];
  //   }else{
  //     sumx-=X[i];
  //   }
  // }
  // int sumy=0;
  // REP(i,sz(Y)){
  //   if(sumy<y){
  //     sumy+=Y[i];
  //   }else{
  //     sumy-=Y[i];
  //   }
  // }
  // if(sumx==x&&sumy==y){
  //   cout << "Yes" << endl;
  // }else{
  //   cout << "No" << endl;
  // }
}
