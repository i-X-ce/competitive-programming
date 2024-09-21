/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int a, b, d; cin >> a >> b >> d;
  int value = a;
  while(value != b){
    cout << value << " ";
    value += d;
  }
  cout << value << endl;
  return 0;
}