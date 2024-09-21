/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, k; cin >> n >> k;
  vector<int>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  int cnt = 0;
  int nin = 0;
  for (int i=0;i<n;i++){
    if (nin + a.at(i) > k){
      cnt++;
      nin = a.at(i);
      continue;
    }else{
      nin += a.at(i);
    }
  }
  if (nin >= 1) cnt++;
  cout << cnt << endl;
  return 0;
}