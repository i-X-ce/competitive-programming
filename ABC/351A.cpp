/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int a = 0, b = 0;
  for (int i=0;i<9;i++){
    int bf; cin >> bf;
    a += bf;
  }
  for (int i=0;i<8;i++){
    int bf; cin >> bf;
    b += bf;
  }
  cout << a - b + 1 << endl;
  return 0;
}