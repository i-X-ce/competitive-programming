/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct Data
{
  string s = "";
  string begins = "";
  string ends = "";

  void inputs(){
    inputBegins();
    inputEnds();
  }

  void inputBegins(){
    if (s.at(0) == '*'){
      begins = "*";
      return;
    }
    for (int i=0;i<s.size();i++){
      if (s.at(i) == '*') break;
      begins += s.at(i);
    }
  }

  void inputEnds(){
    if (s.at(s.size()-1) == '*'){
      ends = '*';
      return;
    }
    if (s.find("*") > s.size()) return;
    for (int i=0;i<s.size();i++){
      if (s.at(s.size()-1-i) == '*') return;
      ends += s.at(s.size()-1-i);
    }
  }
  
};

bool checkB(string s1, string s2){
  if (s1 == "*" || s2 == "*") return true;
  for (int i=0;i<max(s1.size(), s2.size());i++){
    if (i >= s1.size() || i >= s2.size()) return true;
    if (s1.at(i) != s2.at(i)) return false;
  }
  return true;
}

bool checkE(string s1, string s2){
  if (s1 == "*" || s2 == "*") return true;
  for (int i=0;i<max(s1.size(), s2.size());i++){
    if (i >= s1.size() || i >= s2.size()) return true;
    if (s1.at(i) != s2.at(i)) return false;
  }
  return true;
}

int main() {
  Data s1, s2;
  cin >> s1.s >> s2.s;
  s1.inputs(); s2.inputs();
  string ans = (checkB(s1.begins, s2.begins) && checkE(s1.ends, s2.ends)) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}


