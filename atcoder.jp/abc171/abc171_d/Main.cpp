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
  ll N;
  cin >> N;
  vector<ll> A(N);
  map<ll,ll> mp;
  ll sum=0;
  REP(i, N){
    cin >> A[i];
    mp[A[i]]++;
    sum+=A[i];
  }
  
  ll Q;
  cin >> Q;
  vector<ll> ans(Q);
  REP(i,Q){
    ll B,C;
    cin >> B >> C;
    ll x = mp[B];
    mp.erase(B);
    sum-=B*x;
    mp[C]+=x;
    sum+=C*x;
    ans.at(i)=sum;
  }

  REP(i,Q){
    cout << ans.at(i) << endl;
  }
}