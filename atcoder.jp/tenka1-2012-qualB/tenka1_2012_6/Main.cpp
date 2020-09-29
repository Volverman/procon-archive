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
string solve(string S){
  string ans;
  int use=0;
  int usb=0;
  REP(i,sz(S)){
    if(S[i]!='_'){
      break;
    }
    usb++;
    ans.push_back('_');
  }
  S=S.substr(usb,sz(S)-usb);
  REPR(i,sz(S)-1,0){
    if(S[i]!='_'){
      break;
    }
    use++;
  }
  S=S.substr(0,sz(S)-use);

  // アンダースコアパターン
  string us=S;
  us.push_back('_');
  int now=0;
  int cnt=0;
  vector<string> splitus;
  REP(i,sz(us)){
    if(us[i]=='_'){
      splitus.push_back(us.substr(now,cnt));
      now=i+1;
      cnt=0;
    }else{
      cnt++;
    }
  }
  int flag=0;
  REP(i,sz(splitus)){
    if(sz(splitus[i])==0){
      flag=1;
    }
    if(splitus[i][0]>='0'&&splitus[i][0]<='9'){
      flag=1;
    }
    REP(j,sz(splitus[i])){
      if(splitus[i][j]>='A'&&splitus[i][j]<='Z'){
        flag=1;
      }
    }
  }

  if(flag==0){
    REP(i,sz(splitus)){
      if(i==0){
        ans+=splitus[i];
      }else{
        splitus[i][0]+='A'-'a';
        ans+=splitus[i];
      }
    }
  }else{
    // キャメルケースパターン
    string cc=S;
    int flag2=1;
    if(cc[0]>='a'&&cc[0]<='z'){
      flag2=0;
    }
    REP(i,sz(cc)){
      if(cc[i]=='_'){
        flag2=1;
      }
    }

    if(flag2==0){
      vector<string> splitcc;
      int now1=0;
      int cnt1=0;
      REP(i,sz(cc)){
        if(cc[i]>='A'&&cc[i]<='Z'){
          splitcc.push_back(cc.substr(now1,cnt1));
          now1=i;
          cnt1=1;
        }else{
          cnt1++;
        }
      }
      splitcc.push_back(cc.substr(now1,cnt1));
      REP(i,sz(splitcc)){
        if(i==0){
          ans+=splitcc[i];
        }else{
          splitcc[i][0]-='A'-'a';
          ans+=splitcc[i];
        }
        if(i!=sz(splitcc)-1){
          ans+='_';
        }
      }
    }else{
      ans+=cc;
    }
  }

  REP(i,use){
    ans+='_';
  }

  return ans;
}
int main()
{
  string S;
  cin >> S;
  cout << solve(S) << endl;
  // random_device seed_gen;
  // mt19937_64 engine(seed_gen());
  // while(1){
  //   string S;
  //   while(sz(S)<=50){
  //     int x=engine()%123;
  //     if((x>=48&&x<=57)||(x<=65&&x>=90)||(x==95)||(x>=97&&x<=122)){
  //       S.push_back(x);
  //     }
  //   }
  //   // cout << S << endl;
  //   if(S!=solve(solve(S))){
  //     cout << S << endl;
  //     cout << solve(S) << endl;
  //   }
  // }
}
