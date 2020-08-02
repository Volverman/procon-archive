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
  string A,B;
  cin >> A >> B;
  map<char,ll> mpA;
  map<char,ll> mpB;
  REP(i,sz(A)){
    mpA[A[i]]++;
    mpB[B[i]]++;
  }
  ll flag = 0;
  ll flag2 = 0;
  for(auto x:mpA){
    if(mpB[x.first]!=x.second){
      flag=1;
    }
    if(x.second>=2){
      flag2=1;
    }
  }
  if(flag==1){
    cout << "NO" << endl;
  }else{
    ll cnt = 0;
    string vecA="";
    string vecB="";
    REP(i,sz(A)){
      if(A[i]!=B[i]){
        cnt++;
        vecA.push_back(A[i]);
        vecB.push_back(B[i]);
      }
    }
    if(cnt>6){
      cout << "NO" << endl;
    }else if(flag2==0){
      REP(i,sz(vecA)){
        FOR(j,i+1,sz(vecA)){
          string vecAcopy=vecA;
          swap(vecAcopy[i],vecAcopy[j]);
          REP(k,sz(vecA)){
            FOR(l,k+1,sz(vecA)){
              string vecAcopy2=vecAcopy;
              swap(vecAcopy2[k],vecAcopy2[l]);
              REP(m,sz(vecA)){
                FOR(n,m+1,sz(vecA)){
                  string vecAcopy3=vecAcopy2;
                  swap(vecAcopy3[m],vecAcopy3[n]);
                  if(vecAcopy3==vecB){
                    cout << "YES" << endl;
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
      cout << "NO" << endl;
    }else if(flag2==1){
      if(vecA==vecB){
        cout << "YES" << endl;
        return 0;
      }
      REP(i,sz(vecA)){
        FOR(j,i+1,sz(vecA)){
          string vecAcopy=vecA;
          swap(vecAcopy[i],vecAcopy[j]);
          if(vecAcopy==vecB){
            cout << "YES" << endl;
            return 0;
          }
          REP(k,sz(vecA)){
            FOR(l,k+1,sz(vecA)){
              string vecAcopy2=vecAcopy;
              swap(vecAcopy2[k],vecAcopy2[l]);
              if(vecAcopy2==vecB){
                cout << "YES" << endl;
                return 0;
              }
              REP(m,sz(vecA)){
                FOR(n,m+1,sz(vecA)){
                  string vecAcopy3=vecAcopy2;
                  swap(vecAcopy3[m],vecAcopy3[n]);
                  if(vecAcopy3==vecB){
                    cout << "YES" << endl;
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
      cout << "NO" << endl;
    }
  }
}