/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  if (n == 1){
    cout << 1 << endl;
    return 0;
  }
  long long ans = 2 * n - 1;
  vector<long long>difs(n-1);
  long long pre;
  for (int i=0;i<n;i++){
    long long a; cin >> a;
    if (i != 0){
      difs.at(i-1) = a - pre;
    }
    pre = a;
  }
  long long len = 0;
  pre = difs.at(0);
  for (int i=0;i<n-1;i++){
    if (difs.at(i) == pre) len++;
    else{
      ans += len * (len - 1) / 2;
      len = 1;
    }
    // cout << difs.at(i) << ":" << len << endl;
    pre = difs.at(i);
  }
  ans += len * (len - 1) / 2;
  cout << ans << endl;
  return 0;
}