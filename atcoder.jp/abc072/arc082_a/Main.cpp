#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define MOD 1000000007
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
  
int main()
{
  int N;
  cin >> N;

  vector<int> a(N);
  REP(i, N) cin >> a[i];
  
  sort(ALL(a));
  // queue<int> b;
  // int MAX = 1;
  // REP(i,N){
  //   if(b.empty()){
  //     b.push(a.at(i));
  //   }else{
  //     if(a.at(i)-b.front()<=2){
  //       b.push(a.at(i));
  //     }else{
  //       MAX=max(MAX,int(b.size()));
  //       b.push(a.at(i));
  //       int c = b.front();
  //       while(b.front()==c){
  //         b.pop();
  //       }
  //     }
  //   }
  //   if(i==N-1){
  //     MAX = max(MAX,int(b.size()));
  //   }
  // }

  // cout << MAX << endl;

  map<int,int> b;
  REP(i,N){
    b[a.at(i)]++;
  }
  int MAX = 1;
  FOR(i,a.at(0),a.at(N-1)+1){
    MAX = max(MAX,b[i]+b[i-1]+b[i+1]);
  }
  cout << MAX << endl;
}