/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

vector<vector<unsigned long long>>mp(19, vector<unsigned long long>(10, 0));

// 一番近くの蛇数が何番目か調べる
unsigned long long calc(unsigned long long x){
  int n = 0;
  unsigned long long y = x;
  while(y > 0){
    y /= 10;
    n++;
  }
  
}

int main() {
  long long l, r; cin >> l >> r;
  int sum = 0;
  for (long long i=2;i<=18;i++){ // 指数
    for (long long j=1;j<=9;j++){ // 底
      unsigned long long x = pow(j, i - 1);
      sum += x;
      mp.at(i).at(j) = sum;
    }
  }
  cout << mp.at(18).at(9) << endl;
  return 0;
}