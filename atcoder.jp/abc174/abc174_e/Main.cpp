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
using P = pair<long double,ll>;
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
  long double N;
  cin >> N;
  long double K;
  cin >> K;
  VEC(ll,inA,N);
  vll A=inA;
  long double sum = 0;
  REP(i,sz(A)){
    sum+=A[i];
  }
  long double x = sum/(K+N);
  vll ans(N,0);
  ll cntK=0;
  REP(i,N){
    int j=A[i]/x;
    if(j!=0){
      A[i]/=j;
      ans[i]+=j-1;
      cntK+=j-1;
    }
  }

  priority_queue<P> pq;
  REP(i,sz(A)){
    pq.push(make_pair(A[i],i));
  }
  REP(i,K-cntK){
    ans[pq.top().se]++;
    ll y = pq.top().se;
    pq.pop();
    long double z = A[y];
    pq.push(make_pair(z/(ans[y]+1),y));
  }
  
  ll MAX = 0;
  REP(i,N){
    MAX=max(MAX,(inA[i]+ans[i])/(ans[i]+1));
  }
  cout << MAX << endl;
}