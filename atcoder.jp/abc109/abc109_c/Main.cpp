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

int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}
int lcm(int a, int b)
{
   return a * b / gcd(a, b);
}


int main()
{
  ll N, X;
  cin >> N >> X;

  vector<ll> A(N);
  REP(i, N){
    cin >> A[i];
  }
  if(N>=2){
    ll x = abs(X-A.at(0));
    ll MIN = gcd(x,abs(A.at(1)-A.at(0)));
    FOR(i,1,N-1){
      MIN = gcd(MIN,abs(A.at(i+1)-A.at(0)));
    }
    cout << MIN << endl;
  }else{
    cout << abs(A.at(0)-X) << endl;
  }
}