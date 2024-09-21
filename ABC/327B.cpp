/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long b; cin >> b;
  for (int i=1;i<=15;i++){
    long long ans = i;
    for (int j=1;j<i;j++){
      ans *= i;
    }
    if (ans == b){
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}