/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  int cnts = 0, cntb = 0;
  for (int i=0;i<s.size();i++){
    if ('a' <= s.at(i) && s.at(i) <= 'z'){
      cnts++;
    }else cntb++;
  }
  for (int i=0;i<s.size();i++){
    if (cnts > cntb){
      cout << (char)tolower(s.at(i));
    }else{
      cout << (char)toupper(s.at(i));
    }
  }
  cout << endl;
  return 0;
}