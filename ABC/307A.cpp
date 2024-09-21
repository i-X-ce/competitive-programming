/*
g++ 307A.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i=0;i<n;i++){
    int sum = 0;
    for (int j=0;j<7;j++){
      int a;
      cin >> a;
      sum += a;
    }
    cout << sum << " ";
  }
  return 0;
}