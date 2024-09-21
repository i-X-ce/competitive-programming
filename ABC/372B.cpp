/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int m; cin >> m;
  int R = 11;
  int r = R;
  vector<int>ans(r + 1, 0);
  int sum = 0;
  while(r >= 0){
    if (m >= pow(3, r)){
      m -= pow(3, r);
      ans.at(r)++;
      sum++;
    }else{
      r--;
    }
  }
  // for (int i=0;i<r+1;i++) cout << ans.at(i) << endl;
  cout << sum << endl;
  for (int i=0;i<R+1;i++){
    for (int j=0;j<ans.at(i);j++){
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}