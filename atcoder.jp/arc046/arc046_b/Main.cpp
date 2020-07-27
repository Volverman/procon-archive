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
  int N,A,B;
  cin >> N >> A >> B;
  if(A==B){
    if(N%(B+1)==0){
      cout << "Aoki" << endl;
    }else{
      cout << "Takahashi" << endl;
    }
  }else if(A>B){
    cout << "Takahashi" << endl;
  }else{
    if(N<=A){
      cout << "Takahashi" << endl;
    }else{
      cout << "Aoki" << endl;
    }
  }
}