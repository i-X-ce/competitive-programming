/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  
  for (int i=0;i<100;i++){
    for (int j=0;j<100;j++){
      long long bf = pow(2, i) * pow(3, j);
      if (bf == n){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}