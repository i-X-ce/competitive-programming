/*
g++ 279B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,t;
  cin >> s >> t;
  if (s.find(t) != -1){
    cout << "Yes";
  }else{
    cout << "No";
  }
  return 0;
}