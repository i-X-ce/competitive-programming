/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int ans = 0;
  for (int i=a;i<=b;i++){
    if (i/10000 == i%10 && (i/1000)%10 == (i/10)%10){
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}