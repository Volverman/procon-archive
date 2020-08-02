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

bool judgeIentersected(ll ax,ll ay,ll bx,ll by,ll cx,ll cy,ll dx,ll dy) {
  ll ta = (cx - dx) * (ay - cy) + (cy - dy) * (cx - ax);
  ll tb = (cx - dx) * (by - cy) + (cy - dy) * (cx - bx);
  ll tc = (ax - bx) * (cy - ay) + (ay - by) * (ax - cx);
  ll td = (ax - bx) * (dy - ay) + (ay - by) * (ax - dx);

  return tc * td < 0 && ta * tb < 0;
  // return tc * td <= 0 && ta * tb <= 0; // 端点を含む場合
}

int main()
{
  ll Ax,Ay,Bx,By,N;
  cin >> Ax >> Ay >> Bx >> By >> N;
  vector<P> A(N);
  REP(i,N) cin >> A[i].first >> A[i].second;
  
  ll cnt = 0;
  REP(i,N-1){
    if(judgeIentersected(Ax,Ay,Bx,By,A[i].first,A[i].second,A[i+1].first,A[i+1].second)){
      cnt++;
    }
  }
  if(cnt%2==1){
    cnt++;
  }
  cout << cnt/2+1 << endl;
}