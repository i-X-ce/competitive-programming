/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<string>s(n);
  int sum = 0;
  for (int i=0;i<n;i++){
    int c; cin >> s.at(i) >> c;
    sum += c;
  }
  sort(s.begin(), s.end());
  cout << s.at(sum % n) << endl;
  return 0;
}