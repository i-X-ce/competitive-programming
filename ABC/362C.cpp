/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  vector<long long>ans(n);
  vector<vector<long long>>lmax(n, vector<long long>(2));
  vector<vector<long long>>rmin(n, vector<long long>(2));
  for (int i=0;i<n;i++){
    long long l, r; cin >> l >> r;
    lmax.at(i).at(0) = l; lmax.at(i).at(1) = i;
    rmin.at(i).at(0) = r; rmin.at(i).at(1) = i;
  }
  sort(lmax.rbegin(), lmax.rend());
  sort(rmin.begin(), rmin.end());
  long long sum = 0;
  vector<bool>mp(n, false);
  for (int i=0;i<n;i++){
    int li = lmax.at(i).at(1), ri = rmin.at(i).at(1);
    if ()
  }
  return 0;
}