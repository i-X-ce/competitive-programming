/*
g++ 288B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<string>s(k);
  for (int i=0;i<k;i++) cin >> s.at(i);
  sort (s.begin(),s.end());
  for (int i=0;i<k;i++) cout << s.at(i) << endl;
  return 0;
}