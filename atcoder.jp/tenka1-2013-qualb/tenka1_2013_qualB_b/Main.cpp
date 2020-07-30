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
  ll Q,L;
  cin >> Q >> L;
  stack<ll> number;
  stack<ll> cnt;
  ll stacksz=0;
  vector<ll> ans;
  int flag = 0;
  REP(i,Q){
    if(flag>=1){
      string str;
      cin >> str;
      if(str=="Push"){
        ll x,y;
        cin >> x >> y;
      }else if(str=="Pop"){
        ll x;
        cin >> x;
      }
      continue;
    }
    string S;
    cin >> S;
    if(S=="Push"){
      ll N,M;
      cin >> N >> M;
      if(stacksz>L-N){
        flag=1;
        continue;
      }
      
      if(number.size()>0&&number.top()==M){
        cnt.top()+=N;
      }else{
        number.push(M);
        cnt.push(N);
      }
      stacksz+=N;
    }else if(S=="Pop"){
      ll N;
      cin >> N;
      stacksz-=N;
      if(stacksz<0){
        flag=2;
        continue;
      }
      while(N-cnt.top()>0&&number.size()>0){
        N-=cnt.top();
        cnt.pop();
        number.pop();
      }
      cnt.top()-=N;
      if(cnt.top()==0&&number.size()>0){
        number.pop();
        cnt.pop();
      }
    }else if(S=="Top"){
      if(number.size()==0){
        flag=2;
        continue;
      }
      ans.push_back(number.top());
    }else if(S=="Size"){
      ans.push_back(stacksz);
    }
  }
  REP(i,ans.size()){
    cout << ans[i] << endl;  
  }
  if(flag==0){
    cout << "SAFE" << endl;
  }else if(flag==1){
    cout << "FULL" << endl;
  }else{
    cout << "EMPTY" << endl;
  }
  
}