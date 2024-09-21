/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,q;
  cin >> n;
  vector<int>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  cin >> q;
  for (int i=0;i<q;i++){
    int k;
    cin >> k;
    if (k == 1){
      cin >> k >> n;
      a.at(k-1) = n;
    }else{
      cin >> k;
      cout << a.at(k-1) << endl;
    }
  }
  return 0;
}