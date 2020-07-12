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

int dx[8] = {1,-1,0,0,1,1,-1,-1}; 
int dy[8] = {0,0,-1,1,-1,1,-1,1}; 
string str[8] = {"R","L","U","D","RU","RD","LU","LD"};

int main()
{
  int x,y;
  cin >> x >> y;
  x--;
  y--;
  string W;
  cin >> W;
  int z;
  REP(i,8){
    if(W==str[i]){
      z=i;
    }
  }
  vector<string> A(9);
  REP(i, 9) cin >> A[i];
  
  
  string ans;
  int mx=dx[z];
  int my=dy[z];
  REP(i,4){
    ans.push_back(A.at(y).at(x));
    int nx = x+mx;
    int ny = y+my;
    if(nx<0){
      nx=1;
      mx*=-1;
    }else if(nx>8){
      nx=7;
      mx*=-1;
    }
    if(ny<0){
      ny=1;
      my*=-1;
    }else if(ny>8){
      ny=7;
      my*=-1;
    }
    x=nx;
    y=ny;
  }

  cout << ans << endl;
}