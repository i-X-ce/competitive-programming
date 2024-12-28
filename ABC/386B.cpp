/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  while(true){
    int b = s.find("00");
    if (b == -1) break;
    s.replace(b, 2, "a");
  }
  cout << s.size() << endl;
  return 0;
}