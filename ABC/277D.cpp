/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<int>a(n); 
  long long sum = 0;
  vector<long long>suma(m);
  for (int i=0;i<n;i++){
    cin >> a.at(i);
    sum += a.at(i);
  }
  return 0;
}