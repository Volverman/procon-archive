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

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;

  int flag = 0;
  int step = S.size()/2;
  if(S.size()%2==1){
    if(step%3==0){
      REP(i,S.size()){
        if(i%3==0&&S.at(i)!='b'){
          flag=1;
        }else if(i%3==1&&S.at(i)!='c'){
          flag=1;
        }else if(i%3==2&&S.at(i)!='a'){
          flag=1;
        }
      }
    }else if(step%3==1){
      REP(i,S.size()){
        if(i%3==0&&S.at(i)!='a'){
          flag=1;
        }else if(i%3==1&&S.at(i)!='b'){
          flag=1;
        }else if(i%3==2&&S.at(i)!='c'){
          flag=1;
        }
      }
    }else if(step%3==2){
      REP(i,S.size()){
        if(i%3==0&&S.at(i)!='c'){
          flag=1;
        }else if(i%3==1&&S.at(i)!='a'){
          flag=1;
        }else if(i%3==2&&S.at(i)!='b'){
          flag=1;
        }
      }
    }
  }else{
    flag=1;
  }

  if(flag==1){
    cout << -1 << endl;
  }else{
    cout << step << endl;
  }
}