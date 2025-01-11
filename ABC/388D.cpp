/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  vector<long long>a(n);
  for (long long i=0;i<n;i++) cin >> a.at(i);
  map<long long, long long>mp;
  long long ans = 0;
  long long none = 0;
  for (long long i=0;i<n;i++){
    none += mp[i];
    long long num = a.at(i) + i - none;
    mp[num + i + 1]++;
    a.at(i) = num - (n - 1 - i);
    a.at(i) = max(a.at(i), 0LL);
  }
  for (int i=0;i<n;i++) cout << a.at(i) << " ";
  cout << endl;
  return 0;
}