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

void digit(vector<string> A){
  if(A.at(0)=="###."){
    if(A.at(1)=="#.#."){
      //089
      if(A.at(2)=="#.#."){
        cout << 0;
      }else{
        if(A.at(3)=="#.#."){
          cout << 8;
        }else{
          cout << 9;
        }
      }
    }else if(A.at(1)=="..#."){
      //237
      if(A.at(2)=="..#."){
        cout << 7;
      }else if(A.at(3)=="#..."){
        cout << 2;
      }else{
        cout << 3;
      }
    }else{
      if(A.at(3)=="..#."){
        cout << 5;
      }else{
        cout << 6;
      }
    }
  }else if(A.at(0)==".#.."){
    cout << 1;
  }else if(A.at(0)=="#.#."){
    cout << 4;
  }
}

int main()
{
  int N;
  cin >> N;

  vector<string> A(5);
  REP(i, 5) cin >> A[i];
  
  REP(i,N){
    vector<string> B(5);
    REP(j,5){
      B.at(j)=A.at(j).substr(4*i+1,4);
    }
    digit(B);
  }
  cout << endl;
}