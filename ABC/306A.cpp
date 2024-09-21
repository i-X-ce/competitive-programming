/*
g++ 306A.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i=0;i<n;i++){
    cout << s.at(i) << s.at(i);
  }
  return 0;
}