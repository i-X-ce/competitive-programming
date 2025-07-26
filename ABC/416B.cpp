/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s; cin >> s;
  vector<int> a(0);
  if (s.at(0) == '.') {
    a.push_back(0);
  }
  for (int i=1;i<s.size();i++) {
    if (s.at(i-1) == '#' && s.at(i) == '.'){
      a.push_back(i);
    }
  }
  for (int p : a){
    s.at(p) = 'o';
  }
  cout << s << endl;
  return 0;
}