/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  int n;
  cin >> n;
  cout << substr(s, n+1); << endl;
  return 0;
}