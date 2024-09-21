/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string n;
  cin >> n;
  if (n.size() > 3){
    for (int i=0;i<n.size()-3;i++){
      n.at(n.size()-1-i) = '0';
    }
  }
  cout << n << endl;
  return 0;
}