/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  sort(a.rbegin(), a.rend());

  int bf = a.at(0);
  int k = 1;
  while(true){
    if (bf != a.at(k)){
      cout << a.at(k) << endl;
      return 0;
    }
    k++;
  }
  return 0;
}