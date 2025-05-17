/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void Yes() {
  cout << "Yes" << endl;
}

void No() {
  cout << "No" << endl;
}

int main() {
  long long n; cin >> n;
  vector<long long> p(n);
  for (long long i=0;i<n;i++) cin >> p.at(i);
  vector<long long> points;
  for (long long i=1;i<n-1;i++){
    if (p.at(i-1) < p.at(i) && p.at(i) > p.at(i+1)) {
      points.push_back(i);
    } else if (p.at(i-1) > p.at(i) && p.at(i) < p.at(i+1)) {
      points.push_back(i);
    }
  }
  if (points.size() <= 1) {
    cout << 0 << endl;
    return 0;
  }
  long long ans = 0;
  long long index = p.at(points.at(0)-1) < p.at(points.at(0)) ? 0 : 1;
  while(index < points.size()) {
    long long l;
    long long r;
    if (index == 0) {
      l = points.at(0);
    } else {
      l = points.at(index) - points.at(index-1);
    }
    if (index + 1 >= points.size()) break;
    if (index + 2 >= points.size()) {
      r = n - points.at(index+1) - 1;
    } else {
      r = points.at(index+2) - points.at(index+1);
    }
    // cout << "l-index:" << points.at(index) << " r-index:" << points.at(index+1) << " l:" << l << " r:" << r << endl;

    ans += l * r;
    index += 2;
  }
  cout << ans << endl;
  return 0;
}