/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string s; cin >> s;
  sort(s.begin(), s.end());
  char fi = 0;
  while(s.at(fi) == '0') fi++;
  cout << s.at(fi);
  for (int i = 0; i < s.size(); i++) {
    if (i == fi) continue;
    cout << s.at(i);
  }
  cout << endl;
  return 0;
}