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
  ll N,Q;
  cin >> N >> Q;

  vector<ll> retu(N);
  REP(i,N){
    retu[i]=i;
  }
  vector<ll> gyou(N);
  REP(i,N){
    gyou[i]=i;
  }
  ll flag = 0;
  vector<ll> ans;
  REP(i,Q){
    ll q;
    cin >> q;
    if(q==1){
      ll A,B;
      cin >> A >> B;
      if(flag==0){
        ll x = gyou[A-1];
        gyou[A-1]=gyou[B-1];
        gyou[B-1]=x;
      }else{
        ll x = retu[A-1];
        retu[A-1]=retu[B-1];
        retu[B-1]=x;
      }
    }else if(q==2){ 
      ll A,B;
      cin >> A >> B;
      if(flag==1){
        ll x = gyou[A-1];
        gyou[A-1]=gyou[B-1];
        gyou[B-1]=x;
      }else{
        ll x = retu[A-1];
        retu[A-1]=retu[B-1];
        retu[B-1]=x;
      }
    }else if(q==3){
      if(flag==1){
        flag=0;
      }else{
        flag=1;
      }
    }else{
      ll A,B;
      cin >> A >> B;
      if(flag==0){
        ans.push_back(N*(gyou[A-1]+1-1)+retu[B-1]+1-1);
      }else{
        ans.push_back(N*(gyou[B-1]+1-1)+retu[A-1]+1-1);
      }
    }
  }

  for(auto t:ans){
    cout << t << endl;
  }
}