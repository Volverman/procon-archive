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

int main()
{
  string S;
  cin >> S;
  if(S.at(12)=='W'&&S.at(11)=='W'&&S.at(17)=='W'&&S.at(16)=='W'){
    cout << "Do" << endl;
  }else if(S.at(10)=='W'&&S.at(9)=='W'&&S.at(15)=='W'&&S.at(14)=='W'){
    cout << "Re" << endl;
  }else if(S.at(8)=='W'&&S.at(7)=='W'&&S.at(13)=='W'&&S.at(12)=='W'){
    cout << "Mi" << endl;
  }else if(S.at(7)=='W'&&S.at(6)=='W'&&S.at(12)=='W'&&S.at(11)=='W'){
    cout << "Fa" << endl;
  }else if(S.at(5)=='W'&&S.at(4)=='W'&&S.at(10)=='W'&&S.at(9)=='W'){
    cout << "So" << endl;
  }else if(S.at(3)=='W'&&S.at(2)=='W'&&S.at(8)=='W'&&S.at(7)=='W'){
    cout << "La" << endl;
  }else if(S.at(1)=='W'&&S.at(0)=='W'&&S.at(6)=='W'&&S.at(5)=='W'){
    cout << "Si" << endl;
  }
}