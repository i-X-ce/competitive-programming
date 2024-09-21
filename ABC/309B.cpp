/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<char>>a(n,vector<char>(n));
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cin >> a.at(i).at(j);
    }
  }
  cout << a.at(1).at(0);
  for (int i=0;i<n-1;i++) cout << a.at(0).at(i);
  cout << endl;
  for (int i=0;i<n-2;i++){
    cout << a.at(i+2).at(0);
    for (int j=0;j<n-2;j++){
      cout << a.at(i+1).at(j+1);
    }
    cout << a.at(i).at(n-1) << endl;
  }
  for (int i=0;i<n-1;i++) cout << a.at(n-1).at(i+1);
  cout << a.at(n-2).at(n-1) << endl;
  return 0;
}