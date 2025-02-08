/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int a1, a2, a3; cin >> a1 >> a2 >> a3;
  if (a1 * a2 == a3) cout << "Yes" << endl;
  else if (a1 * a3 == a2) cout << "Yes" << endl;
  else if (a2 * a3 == a1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}