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
  string A,B,C;
  cin >> A >> B >> C;

  int x = A.size(),y=B.size(),z=C.size();
  int flag = 0;
  int a = 0,b = 0,c = 0;
  while((flag==0&&a<x)||(flag==1&&b<y)||(flag==2&&c<z)){
    if(flag==0){
      if(A.at(a)=='a'){
        flag = 0;
      }else if(A.at(a)=='b'){
        flag = 1;
      }else if(A.at(a)=='c'){
        flag = 2;
      }
      a++;
    }else if(flag==1){
      if(B.at(b)=='a'){
        flag = 0;
      }else if(B.at(b)=='b'){
        flag = 1;
      }else if(B.at(b)=='c'){
        flag = 2;
      }
      b++;
    }else if(flag==2){
      if(C.at(c)=='a'){
        flag = 0;
      }else if(C.at(c)=='b'){
        flag = 1;
      }else if(C.at(c)=='c'){
        flag = 2;
      }
      c++;
    }
  }

  if(flag==0){
    cout << "A" << endl;
  }else if(flag==1){
    cout << "B" << endl;
  }else{
    cout << "C" << endl;
  }
}