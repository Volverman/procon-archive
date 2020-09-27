#include <bits/stdc++.h>
#include <atcoder/all>
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
using namespace atcoder;
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
  INT(N);
  INT(M);
  vector<string> A(N);
  REP(i, N)cin >> A[i];
  mf_graph<int> gr(N*M+2);
  REP(i,N){
    REP(j,M){
      if(A[i][j]=='.'){
        if((i+j)%2==0){
          gr.add_edge(0,i*M+(j+1),1);
          REP(k,4){
            int vy=i+dy[k];
            int vx=j+dx[k];
            if(vy<0||vy>N-1||vx<0||vx>M-1)continue;
            if(A[vy][vx]=='.'){
              gr.add_edge(i*M+(j+1),vy*M+(vx+1),1);
            }
          }
        }else{
          gr.add_edge(i*M+(j+1),N*M+1,1);
        }
      }
    }
  }

  cout << gr.flow(0,N*M+1) << endl;
  auto edges=gr.edges();
  for(auto x:edges){
    if(x.from==0||x.to==N*M+1||x.flow==0)continue;
    x.to--;
    x.from--;
    int toy=x.to/M;
    int tox=x.to%M;
    int fromy=x.from/M;
    int fromx=x.from%M;
    if(tox==fromx+1){
      A[fromy][fromx]='>';
      A[toy][tox]='<';
    }else if(tox==fromx-1){
      A[fromy][fromx]='<';
      A[toy][tox]='>';
    }else if(toy==fromy+1){
      A[fromy][fromx]='v';
      A[toy][tox]='^';
    }else if(toy==fromy-1){
      A[fromy][fromx]='^';
      A[toy][tox]='v';
    }
  }

  REP(i,N){
    cout << A[i] << endl;
  }
}