/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, m; cin >> n >> m;
  vector<vector<long long>>wx(0), wy(0), bx(0), by(0);
  for (int i=0;i<m;i++){
    long long x, y; cin >> x >> y;
    char c; cin >> c;
    if (c == 'W'){
      long long it;
      if (x > y) it = *upper_bound(wx.begin(), wx.end(), x * y);
      else it = *upper_bound(wy.begin(), wy.end(), x * y);
      if (it != wx.end() || it != wy.end()){
        cout << "No" << endl;
        return 0;
      }
      if (x > y) wx.push_back(x * y);
      else wy.push_back(x * y);
    } else {
      x = n - x + 1;
      y = n - y + 1;
      auto it = bx.begin();
      if (x > y) it = upper_bound(bx.begin(), bx.end(), x * y);
      else it = upper_bound(by.begin(), by.end(), x * y);
      if (it != bx.end() || it != by.end()){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}