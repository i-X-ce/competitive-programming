/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  bool a = false, b = false, c = false;
  for (int i=0;i<s.size();i++){
    if (s.at(i) == 'A'){
      if (b || c){
        cout << "No" << endl;
        return 0;
      }
      a = true;
    }else if (s.at(i) == 'B'){
      if (c){
        cout << "No" << endl;
        return 0;
      }
      b = true;
    }else{
      c = true;
    }
  }
  cout << "Yes" << endl;
  return 0;
}