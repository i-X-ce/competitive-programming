/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>d(n);
  for (int i=0;i<n;i++) cin >> d.at(i);

  vector<vector<bool>>dmp(n, vector<bool>(n));
  int sum = 0;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (!dmp.at(i).at(j) && i != j){
        dmp.at(i).at(j) = true;
        dmp.at(j).at(i) = true;
        sum += d.at(j) * d.at(i);
        //cout << i << ":" << j << " ";
      }
    }
  }

  cout << sum << endl;
  return 0;
}