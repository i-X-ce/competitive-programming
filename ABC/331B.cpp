/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m, s, l; cin >> n >> s >> m >> l;
  long long sum = s*100+l*100+m*100;
  for (int i=0;i<=100;i++){
    for (int j=0;j<=100;j++){
      for (int k=0;k<=100;k++){
        if (i*6+j*8+k*12 >= n){
          long long bf = s*i+m*j+l*k;
          sum = min(bf, sum);
        }
      }
    }
  }
  cout << sum << endl;
  return 0;
}