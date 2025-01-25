/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  vector<int>list(0);
  for (int i = 1; i <= 5; i++){
    int a; cin >> a;
    if (a != i) {
      list.push_back(i);
    }
  }
  if (list.size() == 2){
    if (abs(list.at(0) - list.at(1)) == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  else cout << "No" << endl;
  return 0;
}