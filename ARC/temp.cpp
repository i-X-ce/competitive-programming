/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int t; cin >> t;
  for (int i=0;i<t;i++){
    long long n, k; cin >> n >> k;
    int sum = 0;
    while(n > 0){
      sum += n%3;
      n /= 3;
    }
    if (sum > k || sum%2 != k%2) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
  return 0;
}