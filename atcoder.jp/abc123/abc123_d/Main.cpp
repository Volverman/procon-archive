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
#define sz(x) ll(x.size())
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
  ll X,Y,Z,K;
  cin >> X >> Y >> Z >> K;
  vector<ll> A(X);
  REP(i, X) cin >> A[i];
  vector<ll> B(Y);
  REP(i, Y) cin >> B[i];
  vector<ll> C(Z);
  REP(i, Z) cin >> C[i];
  vector<ll> sumAB;
  REP(i,X){
    REP(j,Y){
      sumAB.push_back(A[i]+B[j]);
    }
  }
  sort(ALL(sumAB));
  reverse(ALL(sumAB));
  vector<ll> sumABC;
  REP(i,min(K,sz(sumAB))){
    REP(j,min(K,Z)){
      sumABC.push_back(sumAB[i]+C[j]);
    }
  }
  sort(ALL(sumABC));
  reverse(ALL(sumABC));
  REP(i,K){
    cout << sumABC[i] << endl;
  }
}
