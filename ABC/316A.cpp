/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,h,x;
  cin >> n >> h >> x;
  for (int i=1;i<=n;i++){
    int p;
    cin >> p;
    if (h+p >= x){
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}