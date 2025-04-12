/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, k; cin >> n >> k;
  string s; cin >> s;
  vector<int> qst(0);
  long long ocnt = 0;
  for (int i=0;i<n;i++){
    if (s.at(i) == 'o'){
      if (i > 0) s.at(i-1) = '.';
      if (i < s.size() - 1) s.at(i+1) = '.';
      ocnt++;
    }
  }
  for (int i=0;i<n;i++){
    if (s.at(i) == '?'){
      qst.push_back(i);
    }
  }
  if (qst.size() == k - ocnt){
    for (int i=0;i<qst.size();i++){
      s.at(qst.at(i)) = 'o';
    }
  } else if (ocnt == k) {
    for (int i=0;i<qst.size();i++){
      s.at(qst.at(i)) = '.';
    }
  }
  cout << s << endl;
  return 0;
}