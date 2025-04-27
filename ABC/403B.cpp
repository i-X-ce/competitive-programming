/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string t, u; cin >> t >> u;
  for (int i=0;i<t.size()-u.size()+1;i++){
    bool ok = true;
    for (int j=0;j<u.size();j++){
      if (t.at(i+j) != u.at(j) && t.at(i+j) != '?'){
        ok = false;
        break;
      }
    }
    if (ok){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}