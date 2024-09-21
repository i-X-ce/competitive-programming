/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  string pre = "";
  for (int i=0;i<n;i++){
    string s; cin >> s;
    if (pre == s && s == "sweet" && i != n-1){
      cout << "No" << endl;
      return 0;
    }
    pre = s;
  }
  cout << "Yes" << endl;
  return 0;
}