/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s = "wbwbwwbwbwbw";
  int w, b; cin >> w >> b;

  // for (int i=0;i<12;i++){
  //   int wcnt = 0, bcnt = 0;
  //   for (int j=0;j<12;j++){
  //     if (wcnt == w%12 && bcnt == b%12){
  //       cout << "Yes" << endl;
  //       return 0;
  //     }
  //     if (s.at((i+j)%12) == 'w') wcnt++;
  //     else bcnt++;
  //   }
  //   if (wcnt == w%7 && bcnt == b%5){
  //     cout << "Yes" << endl;
  //     return 0;
  //   }
  // }
  // cout << "No" << endl;

  // map<int, set<int>>list;
  // for (int i=0;i<s.size();i++){
  //   int wcnt = 0, bcnt = 0;
  //   for (int j=0;j<s.size();j++){
  //     if (s.at((i + i)%12) == 'w') wcnt++;
  //     else bcnt++;
  //     list[wcnt].insert(bcnt);
  //   }
  // }
  // if (list[w%7].count(b%5)) cout << "Yes" << endl;
  // else cout << "No" << endl;

  bool ok = false;
  for (int i=0;i<12;i++){
    int wcnt = 0, bcnt = 0;
    int offset = i;
    while(bcnt < b){
      if (s.at(offset) == 'b') bcnt++;
      else wcnt++;
      offset = (offset + 1) % 12;
    }
    if (s.at((offset+1) % 12) == 'w'){
      if (wcnt == w || wcnt + 1 == w || wcnt + 2 == w) ok = true;
    }else{
      if (wcnt == w || wcnt + 1 == w) ok = true;
    }
    if (ok){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}