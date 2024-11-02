/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  vector<int>a(4, 0);
  for (int i=0;i<4;i++){
    int bf; cin >> bf;
    a.at(bf-1)++;
  }
  int sum = 0;
  for (int i=0;i<4;i++) sum += (a.at(i)/2);
  cout << sum << endl;
  return 0;
}