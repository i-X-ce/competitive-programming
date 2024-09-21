/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, l, r; cin >> n >> l >> r;
  for (int i=0;i<n;i++){
    int num = i + 1;
    if (num == l){
      for (int j=0;j<r-l+1;j++){
        cout << r - j << " ";
      }
      i += r - l;
    }else cout << num << " ";
  }
  cout << endl;
  return 0;
}