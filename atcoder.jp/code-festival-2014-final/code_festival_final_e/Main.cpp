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
  int N;
  cin >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  A.push_back(A[N-1]);
  int flag=0;
  int cnt = 0;
  REP(i,N){
    if(flag==0&&A.at(i)<A.at(i+1)){
      flag=1;
      cnt++;
    }else if(flag==1&&A.at(i)>A.at(i+1)){
      flag=0;
      cnt++;
    }
  }
  int flag2=1;
  int cnt2 = 0;
  REP(i,N){
    if(flag2==0&&A.at(i)<A.at(i+1)){
      flag2=1;
      cnt2++;
    }else if(flag2==1&&A.at(i)>A.at(i+1)){
      flag2=0;
      cnt2++;
    }
  }
  cnt++;
  cnt2++;
  if(cnt<3){
    cnt=0;
  }
  if(cnt2<3){
    cnt2=0;
  }

  cout << max(cnt,cnt2) << endl;
}