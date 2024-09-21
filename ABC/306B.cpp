/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  bitset<64>a;
  for (int i=0;i<64;i++){
    int b;
    cin >> b;
    if(b == 1){
      a.set(i);
    }
  }
  //long long b = a.to;
  cout << a.to_ullong() << endl;
  return 0;
}