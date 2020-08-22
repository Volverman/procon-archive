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
  int H,W,M;
  cin >> H >> W >> M;
  vector<P> A(M);
  REP(i,M){
    cin >> A[i].first >> A[i].second;
    A[i].fi--;
    A[i].se--;
  }

  vector<int> vec1(H,0);
  vector<int> vec2(W,0);

  REP(i,M){
    vec1[A[i].fi]++;
    vec2[A[i].se]++;
  }

  int maxh=0;
  int maxw=0;
  REP(i,H){
    maxh=max(maxh,vec1[i]);
  }
  int cnth=0;
  int cntw=0;
  REP(i,H){
    if(vec1[i]==maxh){
      cnth++;
    }
  }
  REP(i,W){
    maxw=max(maxw,vec2[i]);
  }
  REP(i,W){
    if(vec2[i]==maxw){
      cntw++;
    }
  }

  int flag = 1;
  int cnt = 0;
  REP(i,M){
    if(vec1[A[i].fi]==maxh&&vec2[A[i].se]==maxw){
      cnt++;
    }
  }

  if(cntw*cnth==cnt){
    flag=1;
  }else{
    flag=0;
  }
  
  cout << maxh+maxw-flag << endl;
}