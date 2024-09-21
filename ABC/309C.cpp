/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<vector<int>>a(n,vector<int>(2));
  long long cnt = 0;
  for (int i=0;i<n;i++){
    cin >> a.at(i).at(0) >> a.at(i).at(1);
    cnt += a.at(i).at(1);
  }
  if (cnt <= k){
    cout << 1 << endl;
    return 0;
  }
  sort(a.begin(), a.end());
  for (int i=0;i<n;i++){
    cnt -= a.at(i).at(1);
    if (cnt <= k){
      cout << a.at(i).at(0)+1 << endl;
      return 0;
    }
  }
  return 0;
}