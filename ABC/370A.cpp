/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int l, r; cin >> l >> r;
  if (r == l){
    cout << "Invalid " << endl;
  }else if (l == 1){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}