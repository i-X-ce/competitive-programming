/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>pas(n);
  int start;
  for (int i=0;i<n;i++){
    int bf; cin >> bf;
    if (bf == -1) start = i;
    else pas.at(bf-1) = i;
  }
  int next = start;
  for (int i=0;i<n;i++){
    cout << next + 1 << " ";
    next = pas.at(next);
  }
  cout << endl;
  return 0;
}