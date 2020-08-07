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
  int cnt = 0;
  REP(i,sz(S)){
    cnt+=S[i]-'a'+1;
  }
  
  string ans;
  while(cnt){
    if(cnt>26){
      ans.push_back('z');
      cnt-=26;
    }else{
      ans.push_back('a'+cnt-1);
      cnt=0;
    }
  }
  if(ans==S){
    if(S=="a"||S=="zzzzzzzzzzzzzzzzzzzz"){
      cout << "NO" << endl;
    }else{
      if(sz(S)==1){
        ans[0]--;
        ans.push_back('a');
        cout << ans << endl;
      }else if(sz(S)==20){
        ans[sz(ans)-2]--;
        ans[sz(ans)-1]++;
        cout << ans << endl;
      }else{
        if(ans[sz(ans)-1]=='a'){
          if(ans[sz(ans)-2]!='z'){
            ans[sz(ans)-2]++;
            cout << ans.substr(0,sz(ans)-1) << endl;
          }else{
            ans[sz(ans)-2]--;
            ans[sz(ans)-1]++;
            cout << ans << endl;
          }
        }else{
          ans[sz(ans)-1]--;
          ans.push_back('a');
          cout << ans << endl;
        }
      }
    }
  }else{
    cout << ans << endl;
  }
}