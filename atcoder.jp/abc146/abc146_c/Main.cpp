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
long long d(long long a) {
    long long res = 0;
    while (a) {
        ++res;
        a /= 10;
    }
    return res;
}
int main()
{
  ll A, B, X;
  cin >> A >> B >> X;


  if(A*1000000000+B*10<=X){
    cout << 1000000000 << endl;
  }else{
    ll left = 0;
    ll right = 1000000001;
    while(right-left>1){
      ll x = (left+right)/2;
      if(A*x+B*d(x)<=X){
        left=x;
      }else{
        right=x;
      }
    }
    cout << left << endl;
  }
  // if(A*1000000000+B*10<=X){
  //   cout << 1000000000 << endl;
  // }else{
  //   int flag = 0;
  //   FOR(i,1,10){
  //     if(A*pow(10,i-1)+B*i<=X&&A*pow(10,i)+B*(i+1)>X){
  //       if(X<=A*(pow(10,i)-1)+B*i){
  //         cout << (X-B*i)/A << endl;
  //       }else{
  //         ll y = pow(10,i)-1;
  //         cout << y << endl;
  //       }
  //       flag = 1;
  //       break;
  //     }
  //   }
  //   if(flag == 0){
  //     cout << 0 << endl;
  //   }
  // }
}