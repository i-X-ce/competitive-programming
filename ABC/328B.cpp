/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int sum = 0;

  for (int i=0;i<n;i++){
    int d; cin >> d;
    int m = i + 1;
    for (int j=1;j<=d;j++){
      if (m < 10){
        if (j < 10){
          if (m == j){
            sum++;
          }
        }else if (j < 100){
          if (m == j%10 && m == (j%100)/10){
            sum++;
          }
        }
      }else if (m < 100){
        if (m%10 != m/10) continue;
        if (j < 10){
          if (m%10 == j){
            sum++;
          }
        }else if (j < 100){
          if (m%10 == j%10 && m%10 == (j%100)/10){
            sum++;
          }
        }
      }
      
    }
  }
  cout << sum << endl;
  return 0;
}