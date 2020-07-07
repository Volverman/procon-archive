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
  vector<int> s;
  REP(i,N){
    if(S.at(i)=='A'){
      s.push_back(0);
    }else if(S.at(i)=='B'){
      s.push_back(1);
    }else if(S.at(i)=='X'){
      s.push_back(2);
    }else if(S.at(i)=='Y'){
      s.push_back(3);
    }
  }

  int MIN = INF;
  REP(i,4){
    REP(j,4){
      REP(k,4){
        REP(l,4){
          if(i==k&&j==l){
            continue;
          }

          int cnt = 0;
          REP(m,N-1){
            if((s.at(m)==i&&s.at(m+1)==j)||(s.at(m)==k&&s.at(m+1)==l)){
              cnt++;
              m++;
            }else{
              cnt++;
            }
            if(m==N-2){
              cnt++;
            }
          }

          MIN=min(MIN,cnt);
        }
      }
    }
  }
  if(N==1){
    MIN = 1;
  }

  cout << MIN << endl;
}