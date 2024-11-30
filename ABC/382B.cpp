/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, d; cin >> n >> d;
  string s; cin >> s;
  for (int i=n-1;i>=0;i--){
    if (s.at(i) == '@'){
      if (d > 0) {
        s.at(i) = '.';
        d--;
      }
    }
  }
  cout << s << endl;
  return 0;
}