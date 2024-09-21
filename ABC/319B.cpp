/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>jlist(0);
  for (int i=1;i<=9;i++){
    if (n%i == 0) jlist.push_back(i);
  }
  for (int i=0;i<=n;i++){
    bool ansf = false;
    for (int j=0;j<jlist.size();j++){
      if (i%(n/jlist.at(j)) == 0){
        cout << jlist.at(j);
        ansf = true;
        break;
      }
    }
    if (!ansf) cout << "-";
  }
  cout << endl;
  return 0;
}