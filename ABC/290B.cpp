/*
g++ 290B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k,cnt;
  string s;
  cin >> n >> k >> s;
  cnt = 0;
  for (int i=0;i<n;i++){
    if (cnt >= k){
      s.at(i) = 'x';
    }else{
      if (s.at(i) == 'o'){
        cnt++;
      }
    }
  }
  cout << s;
  return 0;
}