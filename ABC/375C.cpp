/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<string>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  for (int i=0;i<n/2;i++){
    vector<string>tmp = a;
    for (int y=0;y<n;y++){
      for (int x=0;x<n;x++){
        if (!(x >= i && x <= n-i-1 && y >= i && y <= n-i-1)) continue;
        a.at(y).at(n-x-1) = tmp.at(x).at(y);
      }
    }
  }
  for (int i=0;i<n;i++) cout << a.at(i) << endl;
  return 0;
}