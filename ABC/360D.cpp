/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, t; cin >> n >> t;
  string s; cin >> s;
  vector<long long>xp(0), xm(0);
  for (int i=0;i<n;i++){
    long long bf; cin >> bf;
    if (s.at(i) == '1') xp.push_back(bf);
    else xm.push_back(bf);
  }
  sort(xm.begin(), xm.end());
  long long sum = 0;
  for (int i=0;i<xp.size();i++){
    int start = distance(xm.begin(), upper_bound(xm.begin(), xm.end(), xp.at(i)));
    int last = distance(xm.begin(), upper_bound(xm.begin(), xm.end(), xp.at(i)+t*2));
    sum += last - start;
  }
  cout << sum << endl;
  return 0;
}