/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void Yes() {
  cout << "Yes" << endl;
}

void No() {
  cout << "No" << endl;
}

int main() {
  long long n, k; cin >> n >> k;
  unsigned long long ans = 1;
  unsigned long long limit = pow(10, k);
  for (long long i=0;i<n;i++){
    long long a; cin >> a;
    if (ans * a >= limit) ans = 1;
    else ans *= a;
  }
  cout << ans << endl;
  return 0;
}