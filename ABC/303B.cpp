/*
g++ 303B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<int>>a(m,vector<int>(n));
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      cin >> a.at(i).at(j);
    }
  }
  vector<vector<int>>b(n,vector<int>(n));
  for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
      if (j != 0){
        b.at(a.at(i).at(j)-1).at(a.at(i).at(j-1)-1)++;
      }
      if (j != n-1){
        b.at(a.at(i).at(j)-1).at(a.at(i).at(j+1)-1)++;
      }
    }
  }
  int cnt = 0;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (b.at(i).at(j) == 0) cnt++;
    }
  }
  cout << (cnt-n)/2 << endl;
  return 0;
}