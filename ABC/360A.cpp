/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  bool r = false;
  for (int i=0;i<3;i++){
    if (s.at(i) == 'R') r = true;
    else if (s.at(i) == 'M'){
      if (r){
        cout << "Yes" << endl;
        return 0;
      }else{
        cout << "No" << endl;
        return 0;
      }
    }
  }
  return 0;
}