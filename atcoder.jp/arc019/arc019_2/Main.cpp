#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
typedef long long ll;
using P = pair<int,int>;

int main()
{
  string S;
  cin >> S;
  int cnt = 0;
  REP(i,sz(S)/2){
    if(S.at(i)!=S.at(sz(S)-i-1)){
      cnt++;
    }
  }
  if(sz(S)==1){
    cout << 0 << endl;
  }else if(cnt!=1){
    if(sz(S)%2==0){
      cout << 25*sz(S) << endl;
    }else if(cnt==0){
      cout << 25*(sz(S)-1) << endl;
    }else{
      cout << 25*sz(S) << endl;
    }
  }else{
    cout << 24*2+25*(sz(S)-2) << endl;
  }
}