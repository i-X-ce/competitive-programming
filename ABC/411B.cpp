/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<int> e(n+1);
  e.at(0) = 0;
  for (int i=1;i<n;i++) {
    int d;
    cin >> d;
    e.at(i) = e.at(i-1) + d;
  }
  for (int i=0;i<n;i++) {
    for (int j=i+1;j<n;j++) {
      cout << e.at(j) - e.at(i) << " ";
    }
    cout << endl;
  }
  return 0;
}