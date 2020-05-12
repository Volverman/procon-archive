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
  int N;
  cin >> N;

  vector<tuple<string,int,int>> A;
  REP(i,N){
    string s;
    int a;
    int b;
    cin >> s >> a;
    a = -1*a;
    b = i;
    A.push_back(make_tuple(s,a,b));
  }

  sort(ALL(A));
  REP(i,N){
    cout << get<2>(A.at(i))+1 << endl;
  }
}