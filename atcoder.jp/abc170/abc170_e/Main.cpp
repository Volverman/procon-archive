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
  ll N,Q;
  cin >> N >> Q;
  vector<map<ll,ll>> inflist(200000,map<ll,ll>());
  map<ll,ll> topinf;
  vector<P> A(N);
  REP(i,N){
    cin >> A[i].first >> A[i].second;
    //A[i].fiレート
    ll rate=A[i].fi;
    A[i].se--;//幼稚園
    ll kind=A[i].se;
    inflist[kind][rate]++;
  }
  REP(i,200000){
    if(inflist[i].size()!=0){
      ll i_top_inf_rate=inflist[i].rbegin()->first;
      topinf[i_top_inf_rate]++;
    }
  }
  vector<P> B(Q);
  REP(i,Q){
    cin >> B[i].first >> B[i].second;
    B[i].fi--;//園児ナンバー
    ll infnum=B[i].fi;
    B[i].se--;//幼稚園
    ll nextkind=B[i].se;
    //A[B[i].fi].seが転園前の幼稚園
    ll prevkind=A[B[i].fi].se;
    ll rate=A[B[i].fi].fi;
    ll prevkind_toprate=inflist[prevkind].rbegin()->first;
    if(prevkind_toprate==rate){
      //転園前にトップ
      topinf[rate]--;
      if(topinf[rate]==0){
        topinf.erase(rate);
      }
      inflist[prevkind][rate]--;
      if(inflist[prevkind][rate]==0){
        inflist[prevkind].erase(rate);
      }
      if(inflist[prevkind].size()>0){
        ll prevkind_newtoprate=inflist[prevkind].rbegin()->first;
        topinf[prevkind_newtoprate]++;
      }
    }else{
      inflist[prevkind][rate]--;
      if(inflist[prevkind][rate]==0){
        inflist[prevkind].erase(rate);
      }
    }

    A[infnum].se=B[i].se;

    if(inflist[nextkind].size()==0){
      inflist[nextkind][rate]++;
      topinf[rate]++;
    }else{
      ll nextkind_toprate=inflist[nextkind].rbegin()->first;
      if(nextkind_toprate<rate){
        //転園後にトップになった場合
        topinf[nextkind_toprate]--;
        if(topinf[nextkind_toprate]==0){
          topinf.erase(nextkind_toprate);
        }
        inflist[nextkind][rate]++;
        topinf[rate]++;
      }else{   
        inflist[nextkind][rate]++;
      }
    }

    cout << topinf.begin()->first << endl;
  }
}
