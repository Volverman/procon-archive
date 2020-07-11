#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
using P = pair<int,int>;

vector<int> pl;
vector<int> mn;

string bin(int x){
  string s = "";
  while(x){
    if(x%2==1){
      s.push_back('1');
    }
    x/=2;
  }
  reverse(ALL(s));
  return s;
}

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;

  int cnt = 0;
  REP(i,N){
    if(S.at(i)=='1'){
      cnt++;
    }
  }

  
  int cnt2 = 1;
  REP(i,N){
    pl.push_back(cnt2%(cnt+1));
    cnt2=(cnt2%(cnt+1))*2;
  }
  int cnt3 = 1;
  REP(i,N){
    if(cnt>1){
      mn.push_back(cnt3%(cnt-1));
      cnt3=(cnt3%(cnt-1))*2;
    }
  }
  reverse(ALL(pl));
  reverse(ALL(mn));

  int plans=0;
  int mnans=0;
  REP(i,N){
    if(S.at(i)=='1'){
      plans+=pl.at(i);
      plans%=(cnt+1);
      if(cnt>1){
        mnans+=mn.at(i);
        mnans%=(cnt-1);
      }
    }
  }

  REP(i,N){
    int x = 0;
    int ans = 0;
    if(S.at(i)=='1'&&cnt>1){
      x = (mnans+(cnt-1)-mn.at(i))%(cnt-1);
      ans++;
    }else if(cnt==1&&S.at(i)=='1'){
      x=0;
    }else{
      x = (plans+pl.at(i))%(cnt+1);
      ans++;
    }
    while(x){
      string st = bin(x);
      int cnt4 = 0;
      REP(j,st.size()){
        if(st.at(j)=='1'){
          cnt4++;
        }
      }
      x%=cnt4;
      ans++;
    }
    cout << ans << endl;
  }


}