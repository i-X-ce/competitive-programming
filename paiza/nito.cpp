/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector<vector<int>>a(n, vector<int>(k));
  for (int i=0;i<n;i++) for (int j=0;j<k;j++) cin >> a.at(i).at(j);
  for (int i=0;i<k;i++){
    for (int j=0;j<n;j++){
      cout << a.at(j).at(i) << " ";
    }
    cout << "\n";
  }
  return 0;
}