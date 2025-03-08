/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int pre; cin >> pre;
  int cnt = 1;
  for (int i=1;i<n;i++){
    int a; cin >> a; 
    if (a == pre){
      cnt++;
      if (cnt >= 3){
        cout << "Yes" << endl;
        return 0;
      }
    } else {
      cnt = 1;
    }
    pre = a;
  }
  cout << "No" << endl;
  return 0;
}