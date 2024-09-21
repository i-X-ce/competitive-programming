/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s = "*1*";
  for (int i=1;i<n;i++){
    string bf = s;
    string a;
    if (i+1 >= 10){
      a = "10";
      a.at(1) += (i+1)%10;
    }else{
      a = "1";
      a.at(0) += i;
    }
    s += a;
    s += bf;
  }
  for (int i=1;i<s.size();i++){
    if (s.at(i) == '*'){
      cout << " ";
    }else{
      cout << s.at(i);
    }
  }
  return 0;
}