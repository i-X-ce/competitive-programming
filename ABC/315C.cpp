/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>>s(n+1, vector<int>(2));
  for (int i=0;i<n;i++){
    int bfn, bf; cin >> bfn >> bf;
    if (s.at(bfn).at(0) <= bf){
      swap(s.at(bfn).at(0), s.at(bfn).at(1));
      s.at(bfn).at(0) = bf;
    }else if (s.at(bfn).at(1) <= bf){
      s.at(bfn).at(1) = bf;
    }
  }
  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());
  int a, b;
  if (s.size() <= 1) a = 0;
  else a = s.at(0).at(0) + s.at(1).at(0);
  b = s.at(0).at(0) + s.at(0).at(1)/2;
  cout << max(a, b) << endl;
  return 0;
}