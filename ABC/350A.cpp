/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  s = s.substr(3, 3);
  int n = atoi(s.c_str());
  if (n == 316 || n >= 350 || n == 0){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
  return 0;
}