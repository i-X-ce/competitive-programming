/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, m; cin >> n >> m;
  long long num = 1, ans = 0;
  for (int i=0;i<=m;i++){
    ans += num;
    if (ans > 1e9){
      cout << "inf" << endl;
      return 0;
    }
    num *= n;
  }
  cout << ans << endl;
  return 0;
}