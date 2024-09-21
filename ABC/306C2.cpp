/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>>ans(n,vector<int>(2));
  map<int,int>a;
  for (int i=0;i<n*3;i++){
    ans.at(i/3).at(1) = i/3;
    int b;
    cin >> b;
    a[b]++;
    if (a[b] == 2){
      ans.at(b-1).at(0) = i;
    }
  }
  sort(ans.begin(),ans.end());
  for (int i=0;i<n;i++) cout << ans.at(i).at(1)+1 << " ";
  return 0;
}