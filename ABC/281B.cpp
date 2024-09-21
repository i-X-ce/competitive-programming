/*
g++ 281B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int>s(n+1);
  s.at(0) = 0;
  for (int i=0;i<n;i++) cin >> s.at(i+1);
  for (int i=0;i<n;i++){
    cout << s.at(i+1) - s.at(i) << " ";
  }
  return 0;
}