/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<vector<int>>a(n, vector<int>(0));
  for (int i=0;i<n;i++){
    for (int j=0;j<=i;j++){
      int bf; cin >> bf;
      a.at(i).push_back(bf);
    }
  }
  int ans = 1;
  for (int i=0;i<n;i++){
    int in = i + 1;
    if (ans >= in){
      ans = a.at(ans-1).at(in-1);
    }else{
      ans = a.at(in-1).at(ans-1);
    }
  }
  cout << ans << endl;
  return 0;
}