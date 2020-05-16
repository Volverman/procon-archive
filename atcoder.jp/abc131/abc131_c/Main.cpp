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

unsigned long long gcd(unsigned long long a, unsigned long long b)
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

unsigned long long lcm(unsigned long long a, unsigned long long b)
{
   return a * b / gcd(a, b);
}

int main()
{
  unsigned long long A, B, C, D;
  cin >> A >> B >> C >> D;
  // unsigned long long x = lcm(C,D);
  // unsigned long long ac,ad,ax;
  // if(A%C==0){
  //   ac = A/C;
  // }else{
  //   ac = A/C+1;
  // }
  // if(A%D==0){
  //   ad = A/D;
  // }else{
  //   ad = A/D+1;
  // }
  // if(A%x==0){
  //   ax = A/x;
  // }else{
  //   ax = A/x+1;
  // }
  // unsigned long long a = B/C-(ac)+1;
  // unsigned long long b = B/D-(ad)+1;
  // unsigned long long c = B/x-(ax)+1;
  // cout << B-A+1-a-b+c << endl;

  cout << (B-(B/C)-(B/D)+(B/lcm(C,D)))-(A-1-((A-1)/C)-((A-1)/D)+((A-1)/lcm(C,D))) << endl;
}