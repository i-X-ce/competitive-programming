/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int sum = 0;
  for (int i=0;i<n;i++){
    string hm, hm2; cin >> hm >> hm2;
    string h = hm.substr(0, 2), h2 = hm2.substr(0, 2), m = hm.substr(3, 2), m2 = hm2.substr(3, 2);
    sum += (stoi(h2) - stoi(h) )* 60 + stoi(m2) - stoi(m);
  }
  cout << sum / 60 << " " << sum % 60 << endl;
  return 0;
}