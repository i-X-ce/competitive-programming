/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  vector<long long>a(n), b(n-1);
  for (int i=0;i<n;i++) cin >> a.at(i);
  for (int i=0;i<n-1;i++) cin >> b.at(i);
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  bool f = false;
  long long ans = 0;
  for (long long i=0;i<n;i++){
    long long bi = f ? i-1 : i;
    if (bi >= n-1){
      ans = a.at(n-1);
      break;
    }
    if (a.at(i) > b.at(bi)){
      if (f){
        cout << -1 << endl;
        return 0;
      }
      f = true;
      ans = a.at(i);
    }
  }
  cout << ans << endl;
  return 0;
}