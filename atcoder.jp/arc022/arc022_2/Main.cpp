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
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  if(N==1){
    cout << 1 << endl;
    return 0;
  }
  int left=0;
  int right=1;
  int MAX=0;
  set<int> st;
  st.insert(A[0]);
  REP(left,N){
    while(right<N&&st.count(A[right])==0){
      st.insert(A[right]);
      right++;
    }
    // cout << st.size() << endl;
    MAX=max(MAX,(int)st.size());
    if(left==right){
      right++;
    }
    // for(auto x:st){
    //   cout << x << " ";
    // }
    // cout << endl;
    st.erase(A[left]);
  }

  cout << MAX << endl;
}