/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string x; cin >> x;
  string ans = "";
  bool zero = true;
  for (int i=0;i<x.size();i++){
    if (x.at(x.size()-i-1) != '0'){
      zero = false;
      ans += x.at(x.size()-i-1);
    }else if (!zero){
      ans += x.at(x.size()-i-1);
    }
  }
  reverse(ans.begin(), ans.end());
  if (ans.at(ans.size()-1) == '.') ans.pop_back();
  cout << ans << endl;
  return 0;
}