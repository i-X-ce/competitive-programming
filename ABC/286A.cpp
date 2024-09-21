/*
g++ 286A.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,p,q,r,s;
  cin >> n >> p >> q >> r >> s;
  vector<int>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  int bf;
  for (int i=0;i<q-p+1;i++){
    bf = a.at(p+i-1);
    a.at(p+i-1) = a.at(r+i-1);
    a.at(r+i-1) = bf;
  }
  for (int i=0;i<n;i++) cout << a.at(i) << " ";
  return 0;
}