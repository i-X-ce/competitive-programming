/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int ans = 0;
  bool isLogin = false;
  for (int i=0;i<n;i++){
    string s; cin >> s;
    if (s == "login"){
      isLogin = true;
    } else if (s == "logout"){
      isLogin = false;
    } else if (s == "public"){
    } else {
      if (!isLogin){
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}