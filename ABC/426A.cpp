/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int conv(string s) {
  if (s == "Ocelot"){
    return 0;
  } else if (s == "Serval"){
    return 1;
  } else {
    return 2;
  }
}

int main() {
  string x, y; cin >> x >> y;
  if (conv(x) >= conv(y)){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}