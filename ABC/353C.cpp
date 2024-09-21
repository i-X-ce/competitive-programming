/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int bs(vector<long long>&a, long long &value){
  int size = a.size();
  int mid;
  int l = 0;
  int r = size - 1;
  while(l < r){
    mid = (l + r) / 2;
    if (value <= a.at(mid)){
      r = mid - 1;
    }else if (value > a.at(mid)){
      l = mid + 1;
    }
    // cout << l <<" "<< mid <<" " << r << endl;
  }
  mid = (l + r) / 2;
  if (a.at(mid) < value) mid++;
  // cout << size - mid << endl;

  return size - mid;
}

int main() {
  int n; cin >> n;
  vector<long long>a(n);
  long long sum = 0;
  for (int i=0;i<n;i++){
    cin >> a.at(i);
    sum += a.at(i) * (n - 1);
  }
  int cnt = 0;
  sort(a.begin(), a.end());
  for (int i=0;i<n;i++){
    long long value = 100000000 - a.at(i);
    if (value > a.at(a.size() - 1)) continue;
    sum -= (bs(a, value) * 50000000 - (a.at(i) >= value ? 50000000 : 0)); 
    cnt += bs(a, value) + (a.at(i) >= value ? 1 : 0);
    // cout << value << endl;
  }
  cout << sum << endl;
  // cout << cnt << endl;

  return 0;
}