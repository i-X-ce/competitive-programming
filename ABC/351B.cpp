/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<vector<char>>a(n, vector<char>(n));
  vector<vector<char>>b(n, vector<char>(n));
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cin >> a.at(i).at(j);
    }
  }
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      // cin >> b.at(i).at(j);
      char bf; cin >> bf;
      if (bf != a.at(i).at(j)){
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }
  return 0;
}