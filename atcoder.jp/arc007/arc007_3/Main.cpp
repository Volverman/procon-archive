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
  string S;
  cin >> S;
  bitset<20> str(0);
  REP(i,sz(S)){
    if(S[i]=='o'){
      str.set(sz(S)-1-i);
      str.set(sz(S)-1-i+sz(S));
    }
  }

  int MIN = 20;
  REP(i,1<<sz(S)){
    bitset<10> bs(i);
    bitset<20> str2=str;
    REP(j,sz(S)){
      if(bs.test(j)){
        str2=(str2|(str<<j+1));
        // if(i==3){
        //   cout << str2 << endl;
        // }
      }
    }
    int cnt = 0;
    REP2(j,sz(S),sz(S)*2-1){
      if(str2.test(j)){
        cnt++;
      }
    }

    if(cnt==sz(S)){
      MIN=min((int)bs.count()+1,MIN);
    }
  }

  cout << MIN << endl;
}