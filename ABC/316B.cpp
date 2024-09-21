/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  sort(a.begin(), a.end());
  for (int i=1;i<n;i++){
    if (a.at(i) - a.at(i-1) == 2){
      cout << a.at(i)-1 << endl;
      return 0;
    }
  }
  return 0;
}