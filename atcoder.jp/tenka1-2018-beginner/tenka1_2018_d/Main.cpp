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
  INT(N);
  int x;
  int flag=0;
  REP(i,N+1){
    if(i*(i+1)/2==N){
      x=i;
      flag=1;
      break;
    }
  }

  if(flag==1){
    cout << "Yes" << endl;
    cout << x+1 << endl;
    vector<vector<int>> vec(x+1,vector<int> ());
    int cnt = 1;
    REP(i,x){
      FOR(j,i+1,x+1){
        vec[i].push_back(cnt);
        vec[j].push_back(cnt);
        cnt++;
      }
    }
    REP(i,x+1){
      cout << x << " ";
      REP(j,x){
        cout << vec[i][j];
        if(j!=x-1){
          cout << " ";
        }
      }
      cout << endl;
    }
  }else{
    cout << "No" << endl;
  }
}