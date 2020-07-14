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
  int x,y;
  cin >> x >> y;
  int N;
  cin >> N;
  vector<P> A(N);
  REP(i,N) cin >> A[i].first >> A[i].second;
  A.push_back(make_pair(A[0].first,A[0].second));
  double MIN = INF;
  REP(i,N){
    int x1 = A[i].first;
    int y1 = A[i].second;
    int x2 = A[i+1].first;
    int y2 = A[i+1].second;
    int bunbo = abs((x1-x2)*y-(y1-y2)*x-x1*y2+x2*y1);
    double bunsi = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    MIN=min(MIN,bunbo/bunsi);
  }
  cout << fixed << setprecision(10) << MIN << endl;
}