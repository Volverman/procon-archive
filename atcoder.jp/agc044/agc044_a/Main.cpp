#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REP2(i, a, b) for(int i = a;i <= b;i++)
#define REPR(i, a, b) for(int i = a; i >= b; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e18
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

ll A,B,C,D;
map<ll,ll> memo;
ll solve(ll N){
  if(N==0) return 0;
  if(N==1) return D;
  if(memo.count(N)) return memo[N];
  ll ret=INF;
  if(N<ret/D) ret=N*D;
  if(N%2==0){
    chmin(ret,solve(N/2)+A);
  }
  if(N%2==1){
    chmin(ret,solve(N/2)+A+D);
    chmin(ret,solve(N/2+1)+A+D);
  }
  if(N%3==0){
    chmin(ret,solve(N/3)+B);
  }
  if(N%3==1){
    chmin(ret,solve(N/3)+B+D);
    chmin(ret,solve(N/3+1)+B+D*2);
  }
  if(N%3==2){
    chmin(ret,solve(N/3)+B+D*2);
    chmin(ret,solve(N/3+1)+B+D);
  }
  if(N%5==0){
    chmin(ret,solve(N/5)+C);
  }
  if(N%5==1){
    chmin(ret,solve(N/5)+C+D);
    chmin(ret,solve(N/5+1)+C+D*4);
  }
  if(N%5==2){
    chmin(ret,solve(N/5)+C+D*2);
    chmin(ret,solve(N/5+1)+C+D*3);
  }
  if(N%5==3){
    chmin(ret,solve(N/5)+C+D*3);
    chmin(ret,solve(N/5+1)+C+D*2);
  }
  if(N%5==4){
    chmin(ret,solve(N/5)+C+D*4);
    chmin(ret,solve(N/5+1)+C+D);
  }
  memo[N]=ret;
  return ret;
}

int main()
{
  INT(T);
  REP(i,T){
    memo.clear();
    ll N;
    cin >> N >> A >> B >> C >> D;
    cout << solve(N) << endl;
  }
}
