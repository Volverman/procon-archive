#include <bits/stdc++.h>
typedef long long ll;
#define REP(i, n) for(int i = 0; i < n; i++)
#define REP2(i, a, b) for(int i = a;i <= b;i++)
#define REPR(i, a, b) for(int i = a; i >= b; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define PI 3.14159265358979323846
#define vi vector<int>
#define vll vector<ll>
#define vi2 vector<vector<int>>
#define eb emplace_back
#define fi first
#define se second
#define ALL(v) v.begin(), v.end()
#define sz(x) int(x.size())
using namespace std;
using P = pair<ll,ll>;
const int dx[]{0, 1, 0, -1, -1, -1, 1, 1}, dy[]{1, 0, -1, 0, -1, 1, -1, 1};
#define INT(name) int name;cin >> name;
#define VEC(type,name,n) vector<type> name(n);REP(i,n) cin >> name[i];

template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

int main()
{
  INT(H);
  INT(W);
  INT(K);
  vector<string> A(H);
  REP(i, H) cin >> A[i];
  
  int MIN = INF;
  REP(i,1<<H){
    bitset<10> bs(i);
    vector<int> cnt(H,0);
    int now = -1;
    int flag2 = 0;
    int cnt2=0;
    int cnt3=0;
    REP(j,H-1){
      if(bs[j]!=bs[j+1]){
        cnt3++;
      }
    }
    REP(j,W){
      REP(k,H){
        if(A[k][j]=='1'){
          cnt[k]++;
        }
      }

      int sum=0;
      int flag=0;
      REP(k,H-1){
        if(bs[k]==bs[k+1]){
          sum+=cnt[k];
        }else{
          sum+=cnt[k];
          if(sum>K){
            flag=1;
          }
          sum=0;
        }
        // if(i==3&&j==4){
        //   cout << sum << endl;
        // }
      }
      sum+=cnt[H-1];
      if(sum>K){
        flag=1;
      }

      if(flag==1){
        if(now==j-1){
          flag2=1;
        }else{
          cnt2++;
          // if(i==3){
          //   cout << j << endl;
          // }
          REP(k,H){
            cnt[k]=A[k][j]-'0';
          }
          now=j-1;
        }
      }
    }

    // if(i==3){
    //   cout << cnt2 << cnt3 << endl;
    // }

    if(flag2==0){
      MIN=min(MIN,cnt3+cnt2);
      // if(cnt3+cnt2==5){
      //   cout << cnt3 << cnt2 << bs << endl;
      // }
    }
  }

  cout << MIN << endl;
}