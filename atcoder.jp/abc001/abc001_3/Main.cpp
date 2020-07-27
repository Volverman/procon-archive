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

string Dir[17]={"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW","C"};
int W[12]={14,92,200,326,476,644,830,1028,1244,1466,1706,1958};

int main()
{
  int A,B;
  cin >> A >> B;
  if(B<=14){
    cout << "C " << 0 << endl;
  }else{
    string d;
    if(A<=112||A>=3488){
      d=Dir[0];
    }else{
      d=Dir[(A-113)/225+1];
    }
    cout << d << " ";
    REP(i,12){
      if(W[i]>=B){
        cout << i << endl;
        break;
      }
      if(i==11&&W[i]<B){
        cout << 12 << endl;
      }
    }
  }
}