/*
g++ 161C.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n,k;
  cin >> n >> k;
  cout << min(abs(n%k-k)%k,n);
  return 0;
}