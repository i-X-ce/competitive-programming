/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, k;cin >> n >> k;
  long long sum = (1 + k) * k / 2;
  set<long long>list;
  for (int i=0;i<n;i++){
    long long a; cin >> a;
    if (a <= k && !list.count(a)){
      sum -= a;
      list.insert(a);
    }
  }
  cout << sum << endl;
  return 0;
}