/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<string>s(n);
  string fill = "";
  for (int i=0;i<n;i++) fill += '#';
  for (int i=0;i<n;i++) s.at(i) = fill;
  for (int i=0;i<n/2+1;i++){
    for (int j=0;j<n-i*2;j++){
      char c = i%2 == 0 ? '#' : '.';
      s.at(i).at(i+j) = c;
      s.at(n-i-1).at(n-1-i-j) = c;
      s.at(i+j).at(i) = c;
      s.at(n-1-i-j).at(n-1-i) = c;
    }
    
  }
  for (int i=0;i<n;i++) cout << s.at(i) << endl;
  return 0;
}