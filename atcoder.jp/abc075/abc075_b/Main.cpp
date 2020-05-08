#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
 
int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H,vector<int>(W, 0));
  
  vector<vector<char>> B(H,vector<char>(W));
  if(H!=1&&W!=1){
    REP(i, H){
      REP(j, W){
        if(i!=0&&i!=H-1&&j!=0&&j!=W-1){
          cin >> B.at(i).at(j);
          if(B.at(i).at(j) == '#'){
            A.at(i).at(j) = -100;
            A.at(i+1).at(j+1)++;
            A.at(i+1).at(j)++;
            A.at(i+1).at(j-1)++;
            A.at(i).at(j+1)++;
            A.at(i).at(j-1)++;
            A.at(i-1).at(j+1)++;
            A.at(i-1).at(j)++;
            A.at(i-1).at(j-1)++;
          }
        }
        if(i==0&&j!=0&&j!=W-1){
          cin >> B.at(i).at(j);
          if(B.at(i).at(j) == '#'){
            A.at(i).at(j) = -100;
            A.at(i+1).at(j+1)++;
            A.at(i+1).at(j)++;
            A.at(i+1).at(j-1)++;
            A.at(i).at(j+1)++;
            A.at(i).at(j-1)++;
          }
        }
        if(i==H-1&&j!=0&&j!=W-1){
          cin >> B.at(i).at(j);
          if(B.at(i).at(j) == '#'){
            A.at(i).at(j) = -100;
            A.at(i).at(j+1)++;
            A.at(i).at(j-1)++;
            A.at(i-1).at(j+1)++;
            A.at(i-1).at(j)++;
            A.at(i-1).at(j-1)++;
          }
        }
        if(i!=0&&i!=H-1&&j==0){
          cin >> B.at(i).at(j);
          if(B.at(i).at(j) == '#'){
            A.at(i).at(j) = -100;
            A.at(i+1).at(j+1)++;
            A.at(i+1).at(j)++;
            A.at(i).at(j+1)++;
            A.at(i-1).at(j+1)++;
            A.at(i-1).at(j)++;
          }
        }
        if(i!=0&&i!=H-1&&j==W-1){
          cin >> B.at(i).at(j);
          if(B.at(i).at(j) == '#'){
            A.at(i).at(j) = -100;
            A.at(i+1).at(j)++;
            A.at(i+1).at(j-1)++;
            A.at(i).at(j-1)++;
            A.at(i-1).at(j)++;
            A.at(i-1).at(j-1)++;
          }
        }
        if(i==0&&j==0){
          cin >> B.at(i).at(j);
          if(B.at(i).at(j) == '#'){
            A.at(i).at(j) = -100;
            A.at(i+1).at(j+1)++;
            A.at(i+1).at(j)++;
            A.at(i).at(j+1)++;
          }
        }
        if(i==0&&j==W-1){
          cin >> B.at(i).at(j);
          if(B.at(i).at(j) == '#'){
            A.at(i).at(j) = -100;
            A.at(i+1).at(j)++;
            A.at(i+1).at(j-1)++;
            A.at(i).at(j-1)++;
          }
        }
        if(i==H-1&&j==0){
          cin >> B.at(i).at(j);
          if(B.at(i).at(j) == '#'){
            A.at(i).at(j) = -100;
            A.at(i-1).at(j)++;
            A.at(i-1).at(j+1)++;
            A.at(i).at(j+1)++;
          }
        }
        if(i==H-1&&j==W-1){
          cin >> B.at(i).at(j);
          if(B.at(i).at(j) == '#'){
            A.at(i).at(j) = -100;
            A.at(i-1).at(j)++;
            A.at(i-1).at(j-1)++;
            A.at(i).at(j-1)++;
          }
        }
      }
    }
  }else if(H==1){
    REP(j,W){
      if(j!=0&&j!=W-1){
        cin >> B.at(0).at(j);
        if(B.at(0).at(j) == '#'){
          A.at(0).at(j-1)++;
          A.at(0).at(j) = -100;
          A.at(0).at(j+1)++;
        }
      }
      if(j==0){
        cin >> B.at(0).at(j);
        if(B.at(0).at(j) == '#'){
          A.at(0).at(j) = -100;
          A.at(0).at(j+1)++;
        }
      }
      if(j==W-1){
        cin >> B.at(0).at(j);
        if(B.at(0).at(j) == '#'){
          A.at(0).at(j-1)++;
          A.at(0).at(j) = -100;
        }
      }
    }
  }else if(W==1){
    REP(i,H){
      if(i!=0&&i!=H-1){
        cin >> B.at(i).at(0);
        if(B.at(i).at(0) == '#'){
          A.at(i-1).at(0)++;
          A.at(i).at(0) = -100;
          A.at(i+1).at(0)++;
        }
      }
      if(i==0){
        cin >> B.at(i).at(0);
        if(B.at(i).at(0) == '#'){
          A.at(i).at(0) = -100;
          A.at(i+1).at(0)++;
        }
      }
      if(i==H-1){
        cin >> B.at(i).at(0);
        if(B.at(i).at(0) == '#'){
          A.at(i-1).at(0)++;
          A.at(i).at(0) = -100;
        }
      }
    }
  }
  

  REP(i,H){
    REP(j,W){
      if(A.at(i).at(j) < 0){
        cout << "#";
      }else{
        cout << A.at(i).at(j);
      }
    }
    cout << endl;
 
  }
}