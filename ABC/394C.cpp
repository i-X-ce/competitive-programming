/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  queue<long long> q;
  for (long long i=1;i<s.size();i++){
    if (s.at(i-1) == 'W' && s.at(i) == 'A'){
      q.push(i-1);
    }
  }
  while (!q.empty()){
    long long i = q.front();
    q.pop();
    if (!(s.at(i) == 'W' && s.at(i+1) == 'A')) continue;
    if (i-1 >= 0 && s.at(i-1) == 'W'){
      q.push(i-1);
    }
    s.at(i) = 'A';
    s.at(i+1) = 'C';
  }
  cout << s << endl;
  return 0;
}