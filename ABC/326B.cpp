/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>a(0);
  for (int i=100;i<=919;i++){
    int n100 = i/100, n10 = (i%100)/10, n1 = i%10;
    if (n100 * n10 == n1) a.push_back(i);
  }
  for (int i=0;i<a.size();i++){
    if (a.at(i) >= n){
      cout << a.at(i) << endl;
      return 0;
    };
  }
  return 0;
}