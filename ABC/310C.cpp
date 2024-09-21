/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,cnt = 0;
  cin >> n;
  map<string,int> ss;
  for (int i=0;i<n;i++){
    string s; 
    cin >> s;
    if (ss.count(s)){
      if (ss[s] == 0){
        ss[s]++;
      }
    }else{
      cnt++;
      ss[s] = 0;
      string sbf = s;
      reverse(s.begin(), s.end());
      if (s != sbf){
        if (ss.count(s)){
          if (ss[s] == 0){
            ss[s]++;
          }
        }else{
          ss[s] = 0;
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}