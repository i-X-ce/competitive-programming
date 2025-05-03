/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void Yes() {
  cout << "Yes" << endl;
}
void No() {
  cout << "No" << endl;
}

int main() {
  string s; cin >> s;
  vector<bool>mp(26);
  for (int i=0;i<s.size();i++){
    mp.at(s.at(i) - 'a') = true;
  }
  for (int i=0;i<mp.size();i++){
    if (mp.at(i) == false){
      cout << char('a' + i) << endl;
      return 0;
    }
  }
  return 0;
}