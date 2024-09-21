/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void abclos(string &s, int start){
  s = s.substr(0, start) + s.substr(start+3, s.size()-(start+3));
}

int main() {
  string s; cin >> s;
  string abc = "ABC";
  int p = s.find("ABC");
  if (p == -1){
    cout << s << endl;
    return 0;
  }
  while(p < s.size()){
    if (s.substr(p, 3) == abc){
      abclos(s, p);
      p = max(0, p-3);
    }else p++;
  }
  cout << s << endl;
  return 0;
}