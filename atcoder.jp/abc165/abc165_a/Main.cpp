#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
 
int main()
{
 int K, A, B;
 cin >> K >> A >> B;
 int flag = 0;
 FOR(i,A,B+1){
     if(i%K==0){
         flag = 1;
     }
 }
 if(flag == 1){
     cout << "OK" << endl;
 }else{
     cout << "NG" << endl;
 }
}