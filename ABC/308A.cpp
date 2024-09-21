/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int>a(8);
  for (int i=0;i<8;i++){
    cin >> a.at(i);
    if (i != 0){
      if (!(a.at(i) >= a.at(i-1))){
        cout << "No" << endl;
        return 0;
      }
    }
    if (!(a.at(i) >= 100 && a.at(i) <= 675 && a.at(i)%5 == 0)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}