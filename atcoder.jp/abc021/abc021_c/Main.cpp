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
const int mod = 1000000007;
struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}
struct edge {
    int to;
    int cost;
};

typedef pair<int, int> P;  // first: 最短距離, second: 頂点番号

int V, d[110];
mint cnt[110];
vector<edge> G[110]; // 隣接リスト表現

void dijkstra(int s) {
    fill(d, d + V, INF);
    d[s] = 0;  // 始点sへの最短距離は0
    fill(cnt, cnt + V, 0);
    cnt[s] = 1;  // 始点sへの最短経路数は1

    priority_queue<P, vector<P>, greater<P>> que;  // 距離が小さい順に取り出せるようgreater<P>を指定
    que.push(P(0, s));
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;  // 更新した頂点の中で距離が最小の頂点v
        if (d[v] < p.first) {
            continue;
        }
        for (auto e : G[v]) {  // 頂点vから出る辺eを走査
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
                cnt[e.to] = cnt[v];  // コストが更新された場合は直前の頂点への最短経路数で上書き
            } else if (d[e.to] == d[v] + e.cost) {
                cnt[e.to] += cnt[v];  // コストが一致する場合はこれまでの最短経路数を足し合わせ
            }
        }
    }
}
int main()
{
  int N,a,b,M;
  cin >> N >> a >> b >> M;
  a--;
  b--;
  vector<P> A(M);
  REP(i,M){
    cin >> A[i].first >> A[i].second;
    A[i].first--;
    A[i].second--;
    edge e2 = {A[i].second,1};
    edge e1 = {A[i].first,1};
    G[A[i].first].push_back(e2);
    G[A[i].second].push_back(e1);
  }

  V=N;
  dijkstra(a);
  cout << cnt[b] << endl;
}