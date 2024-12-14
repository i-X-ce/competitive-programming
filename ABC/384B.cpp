/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, r; cin >> n >> r;
  for (int i=0;i<n;i++){
    int d, tr; cin >> d >> tr;
    if (d == 1){
      if (r >= 1600 && r <= 2799)  r += tr;
    } else {
      if (r >= 1200 && r <= 2399) r += tr;
    }
  }
  cout << r << endl;
  return 0;
}