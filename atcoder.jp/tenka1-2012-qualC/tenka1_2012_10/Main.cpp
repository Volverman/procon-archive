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
  string s;
  cin >> s;
  vector<map<int,int>> mp(4);
  vector<map<int,int>> mp2(4);
  REP(i,4){
    FOR(j,10,15){
      mp.at(i)[j]++;
      mp2.at(i)[j]++;
    }
  }

  vector<int> A;
  REP(i,s.size()){
    if(s.at(i)=='S'){
      A.push_back(0);
    }else if(s.at(i)=='H'){
      A.push_back(1);
    }else if(s.at(i)=='D'){
      A.push_back(2);
    }else if(s.at(i)=='C'){
      A.push_back(3);
    }else if(s.at(i)=='1'){
      A.push_back(10);
      i++;
    }else if(s.at(i)<'A'){
      A.push_back(s.at(i)-'0');
    }else if(s.at(i)=='J'){
      A.push_back(11);
    }else if(s.at(i)=='Q'){
      A.push_back(12);
    }else if(s.at(i)=='K'){
      A.push_back(13);
    }else if(s.at(i)=='A'){
      A.push_back(14);
    }
  }

  vector<int> ans;
  int flag2 = -1;
  REP(i,A.size()){
    if(i%2==0){
      if(A.at(i+1)>=10&&mp.at(A.at(i))[A.at(i+1)]>0){
        mp.at(A.at(i))[A.at(i+1)]--;
      }
    }else{
      continue;
    }
    REP(j,4){
      int flag = 0;
      for(auto x:mp.at(j)){
        if(x.second!=0){
          flag = 1;
        }
      }
      if(flag == 0){
        flag2 = j;
        break;
      }
    }
    if(flag2>=0){
      break;
    }
  }

  REP(i,A.size()){
    if(i%2==0){
      if(A.at(i)!=flag2||A.at(i+1)<10||mp2.at(A.at(i))[A.at(i+1)]==0){
        ans.push_back(A.at(i));
        ans.push_back(A.at(i+1));
      }else{
        mp2.at(A.at(i))[A.at(i+1)]--;
      }
    }
    int flag = 0;
    for(auto x:mp2.at(flag2)){
      if(x.second!=0){
        flag=1;
      }
    }
    if(flag==0){
      break;
    }
  }

  REP(i,ans.size()){
    if(i%2==0){
      if(ans.at(i)==0){
        cout << "S";
      }else if(ans.at(i)==1){
        cout << "H";
      }else if(ans.at(i)==2){
        cout << "D";
      }else if(ans.at(i)==3){
        cout << "C";
      }
    }else{
      if(ans.at(i)<=10&&ans.at(i)>=2){
        cout << ans.at(i);
      }else if(ans.at(i)==14){
        cout << "A";
      }else if(ans.at(i)==11){
        cout << "J";
      }else if(ans.at(i)==12){
        cout << "Q";
      }else if(ans.at(i)==13){
        cout << "K";
      }
    }
  }
  if(ans.size()==0){
    cout << 0;
  }
  cout << endl;
}