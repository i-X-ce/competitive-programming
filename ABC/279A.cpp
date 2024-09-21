/*
g++ 279A.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int sum = 0;
  for (int i=0;i<s.size();i++){
    if (s.at(i) == 'w'){
      sum += 2;
    }else{
      sum++;
    }
  }
  cout << sum;
  return 0;
}