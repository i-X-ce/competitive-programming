/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;
  int ans,num;
  cin >> ans;
  num = 0;
  for (int i=1;i<n;i++){
    int a;
    cin >> a;
    if (a > ans){
      num = i;
      ans = a;
    }
  }
  cout << num+1;
  return 0;
}