/*
g++ 301A.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,a,t;
  a = 0;
  t = 0;
  string s;
  cin >> n >> s;
  for (int i=0;i<n;i++){
    if (s.at(i) == "T"){
      t++;
    }else{
      a++;
    }
    if (t >= (n+1)/2) {
      cout << "T";
      return 0;
    }else{
      if (a >= (n+1)/2){
        cout "A";
        return 0;
      }
    }
  }
  return 0;
}