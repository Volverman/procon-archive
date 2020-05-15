#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
  
int main()
{
  int N, M;
  cin >> N >> M;

  vector<vector<int>> A(M,vector<int>(2));
  REP(i, M){
    REP(j, 2){
      cin >> A.at(i).at(j);
    }
  }
  if(N==3){
    int flag2 = 0;
    FOR(i,100,1000){
      int flag = 0;
      REP(j,M){
        if(A.at(j).at(0)==1){
          if(A.at(j).at(1)!=i/100%10){
            flag = 1;
          } 
        }
        if(A.at(j).at(0)==2){
          if(A.at(j).at(1)!=i/10%10){
            flag = 1;
          } 
        }
        if(A.at(j).at(0)==3){
          if(A.at(j).at(1)!=i%10){
            flag = 1;
          } 
        }
      }
      if(flag == 0){
        flag2 = 1;
        cout << i << endl;
        break;
      }
    }
    if(flag2 == 0){
      cout << -1 << endl;
    }
  }else if(N==2){
    int flag2 = 0;
    FOR(i,10,100){
      int flag = 0;
      REP(j,M){
        if(A.at(j).at(0)==1){
          if(A.at(j).at(1)!=i/10%10){
            flag = 1;
          } 
        }
        if(A.at(j).at(0)==2){
          if(A.at(j).at(1)!=i%10){
            flag = 1;
          } 
        }
      }
      if(flag == 0){
        flag2 = 1;
        cout << i << endl;
        break;
      }
    }
    if(flag2 == 0){
      cout << -1 << endl;
    }
  }else if(N==1){
    int flag2 = 0;
    FOR(i,0,10){
      int flag = 0;
      REP(j,M){
        if(A.at(j).at(0)==1){
          if(A.at(j).at(1)!=i%10){
            flag = 1;
          } 
        }
      }
      if(flag == 0){
        flag2 = 1;
        cout << i << endl;
        break;
      }
    }
    if(flag2 == 0){
      cout << -1 << endl;
    }
  }
}