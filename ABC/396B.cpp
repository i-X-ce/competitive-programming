/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int q; cin >> q;
  stack<int> s;
  for (int i=0;i<100;i++) s.push(0);
  for (int i=0;i<q;i++){
    int query; cin >> query;
    if (query == 1){
      int x; cin >> x;
      s.push(x);
    } else {
      int x = s.top();
      s.pop();
      cout << x << endl;
    }
  }
  return 0;
}