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
  string A,B,C;
  cin >> A >> B >> C;
  map<char,int> mpa;
  map<char,int> mpb;
  map<char,int> mpc;
  REP(i,A.size()){
    mpa[A[i]]++;
    mpb[B[i]]++;
    mpc[C[i]]++;
  }

  int flag = 0;
  int needA=0;
  int needB=0;
  int plusA=0;
  int plusB=0;
  FOR(i,'A','Z'+1){
    if(mpc[i]>mpa[i]+mpb[i]){
      flag=1;
    }
    int x=max(0,mpc[i]-mpb[i]);
    int y=max(0,mpc[i]-mpa[i]);
    needA+=x;
    needB+=y;
    plusA+=max(0,min(mpc[i]-x,mpa[i]-x));
    plusB+=max(0,min(mpc[i]-y,mpb[i]-y));
    // cout << needA << " " << plusA << " " << needB << " " << plusB << endl;
  }

  if(needA<=sz(A)/2&&needA+plusA>=sz(A)/2){
  }else{
    flag=1;
  } 
  if(needB<=sz(B)/2&&needB+plusB>=sz(B)/2){
  }else{
    flag=1;
  }

  if(flag==0){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}