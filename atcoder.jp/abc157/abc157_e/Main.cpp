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
  string S;
  cin >> S;
  vector<set<int>> nanmojime(26,set<int>());
  REP(i,sz(S)){
    nanmojime[S[i]-'a'].insert(i);
  }
  INT(Q);
  vector<int> ans;
  REP(i,Q){
    INT(type);
    if(type==1){
      INT(a);
      a--;
      char b;
      cin >> b;
      nanmojime[S[a]-'a'].erase(a);
      S[a]=b;
      nanmojime[b-'a'].insert(a);
    }else{
      INT(a);
      INT(b);
      a--;
      b--;
      int cnt = 0;
      REP2(j,'a','z'){
        auto itr=nanmojime[j-'a'].lower_bound(a);
        if(itr==nanmojime[j-'a'].end()) continue;
        if(b>=*itr){
          // cout << *itr << endl;
          cnt++;
        }
      }
      ans.push_back(cnt);
    }
  }

  REP(i,sz(ans)){
    cout << ans[i] << endl;
  }
}