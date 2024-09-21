/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, t; cin >> n >> t;
  vector<set<int>>sty(n);
  vector<set<int>>stx(n);
  set<int>stn1;
  set<int>stn2;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      sty.at(i).insert(j);
      stx.at(i).insert(j);
    }
    stn1.insert(i);
    stn2.insert(i);
  }
  for (int i=0;i<t;i++){
    int a; cin >> a; a--;
    int y = a / n, x = a % n;
    sty.at(y).erase(x);
    stx.at(x).erase(y);
    // cout << " x:" << x << " y:" << y << endl;
    if (x == y) stn1.erase(x);
    if (n-x-1 == y) stn2.erase(x);
    if (sty.at(y).size() == 0 || stx.at(x).size() == 0 || stn1.size() == 0 || stn2.size() == 0){
      // cout << "y:" << sty.at(y).size() << " "<< "x:" << stx.at(x).size() << " "<< "n1:" << stn1.size() << " "<< "n2:" << stn2.size() << endl;
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}