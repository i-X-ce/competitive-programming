/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<vector<int>>xy(n, vector<int>(2));
  for (int i=0;i<n;i++){
    cin >> xy.at(i).at(0) >> xy.at(i).at(1);
  }
  for (int i=0;i<n;i++){
    int maxl = 0;
    int index = n;
    for (int j=0;j<n;j++){
      int length = (xy.at(i).at(0)-xy.at(n-j-1).at(0))*(xy.at(i).at(0)-xy.at(n-j-1).at(0)) + (xy.at(i).at(1)-xy.at(n-j-1).at(1))*(xy.at(i).at(1)-xy.at(n-j-1).at(1));
      if (maxl <= length){
        maxl = length;
        index = n-j;
      }
    }
    cout << index << endl;
  }
  return 0;
}