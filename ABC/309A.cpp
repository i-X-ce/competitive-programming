/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  if (abs(a-b) == 1){
    if ((a == 3 && b == 4) || (a == 4 && b == 3) || (a == 6 && b == 7) || (a == 7 && b == 6)){
      cout << "No" << endl;
      return 0;
    }
    cout << "Yes" << endl;
  }  else cout << "No" << endl;
  return 0;
}