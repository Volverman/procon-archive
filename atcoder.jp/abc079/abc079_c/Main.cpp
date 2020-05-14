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
  string S;
  cin >> S;

  int a = S.at(0)-'0';
  int b = S.at(1)-'0';
  int c = S.at(2)-'0';
  int d = S.at(3)-'0';

  if(a+b+c+d==7){
    cout << a << "+" << b << "+" << c << "+" << d << "=" << 7 << endl;
  }else if(a-b+c+d==7){
    cout << a << "-" << b << "+" << c << "+" << d << "=" << 7 << endl;
  }else if(a+b-c+d==7){
    cout << a << "+" << b << "-" << c << "+" << d << "=" << 7 << endl;
  }else if(a+b+c-d==7){
    cout << a << "+" << b << "+" << c << "-" << d << "=" << 7 << endl;
  }else if(a-b-c+d==7){
    cout << a << "-" << b << "-" << c << "+" << d << "=" << 7 << endl;
  }else if(a-b+c-d==7){
    cout << a << "-" << b << "+" << c << "-" << d << "=" << 7 << endl;
  }else if(a+b-c-d==7){
    cout << a << "+" << b << "-" << c << "-" << d << "=" << 7 << endl;
  }else if(a-b-c-d==7){
    cout << a << "-" << b << "-" << c << "-" << d << "=" << 7 << endl;
  }
}