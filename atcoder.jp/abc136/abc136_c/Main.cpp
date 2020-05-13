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
  ll N;
  cin >> N;

  vector<ll> H(N);
  REP(i, N) cin >> H[i];

  int flag = 0;
  int a = 0;
  int flag2 = 0;
  REP(i,N-1){
    if(flag == 0&&H.at(i) > H.at(i+1)){
      a = H.at(i);
      flag = 1;
    }else if(flag == 1&&H.at(i) < H.at(i+1)){
      if(a-H.at(i)>=2){
        flag2 = 1;
      }
      flag = 0;
    }
    if(flag == 1&&i == N-2&&H.at(i)>=H.at(i+1)){
      if(a-H.at(i+1)>=2){
        flag2 = 1;
      }
      flag = 0;
    }
  }


  if(flag2 == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
} 