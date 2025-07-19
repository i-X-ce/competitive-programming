/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s; cin >> s;
  vector<int> sl(0);
  for (int i=0;i<s.size();i++) {
    if (s.at(i) == '#') {
      sl.push_back(i + 1);
    }
  }
  for (int i=0;i<sl.size()/2;i++) {
    cout << sl.at(i*2) << "," << sl.at(i*2+1) << endl;
  }
  return 0;
}