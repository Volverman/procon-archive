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

//2で割れる回数を求める関数
int div2(int x){
  int cnt = 0;
  while(x>1){
    x/=2;
    cnt++;
  }
  return cnt;
}

int main()
{
  int N, K;
  cin >> N >> K;
  int x;
  if(K==pow(2,div2(K))){
    x = K;
  }else{
    x = pow(2,div2(K)+1);
  }
  int sum = 0;
  FOR(i,1,N+1){
    int cnt=0;
    int j = i;
    while(j<K){
      j*=2;
      cnt++;
    }
    sum+=pow(2,div2(x)-cnt);
  }
  double y = N*x;
  double z = sum;
  double a = z/y;
  cout << fixed << setprecision(10) << a << endl;
}