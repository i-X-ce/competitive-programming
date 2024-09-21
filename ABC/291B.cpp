/*
g++ 291B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<double>x(n*5);
  for (int i=0;i<5*n;i++) cin >> x.at(i);
  sort (x.begin(),x.end());
  for (int i=0;i<n;i++) x.pop_back();
  reverse (x.begin(),x.end());
  for (int i=0;i<n;i++) x.pop_back();
  double score = 0.0000000;
  for (int i=0;i<x.size();i++){
    score += x.at(i);
  }
  score = score/(n*5 - n*2);
  cout << score;
  return 0;
}