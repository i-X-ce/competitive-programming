/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, a, b; cin >> n >> a >> b;
  map<long long, long long>mp;
  for (int i=0;i<n;i++){
    long long d; cin >> d;
    mp[d%(a+b)]++;
  }
  int sum = 0;
  for (int i=0;i<b-a;i++) sum += mp[i];
  for (int i=1;i<=a+b;i++){
    sum -= mp[(i-1)%(a+b)];
    sum += mp[(i+b-a-1)%(a+b)];
    if (sum == 0){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}