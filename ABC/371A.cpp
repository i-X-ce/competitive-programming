/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  char sab, sac, sbc; cin >> sab >> sac >> sbc;
  int a, b, c; a = b = c = 0;
  if (sab == '<') b++;
  else a++;
  if (sac == '<') c++;
  else a++;
  if (sbc == '<') c++;
  else b++;
  if (a == 1) cout << 'A' << endl;
  else if (b == 1) cout << 'B' << endl;
  else cout << 'C' << endl;
  return 0;
}