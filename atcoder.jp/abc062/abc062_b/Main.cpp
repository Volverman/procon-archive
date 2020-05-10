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
  
  vector<vector<char>> a(H+2,vector<char>(W+2));
  REP(i, H+2){
    if(i==0||i==H+1){
      REP(j,W+2){
        a.at(i).at(j) = '#';
      }
    }else{
      REP(j, W+2){
        if(j==0||j==W+1){
          a.at(i).at(j)  = '#';
        }else{
          cin >> a.at(i).at(j);
        }
      }
    }
  }

  REP(i,H+2){
    REP(j,W+2){
      cout << a.at(i).at(j);
    }
    cout << endl;
  }
}