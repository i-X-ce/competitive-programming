/*
g++ 286B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s,ans;
  cin >> n >> s;
  s += " ";
  ans = "";
  for (int i=0;i<n;i++){
    if (s.at(i) == 'n' && s.at(i+1) == 'a'){
      ans += "nya";
      i++;
    }else{
      ans += s.at(i);
    }
  }
  cout << ans;
  return 0;
}