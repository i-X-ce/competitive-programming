/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0;i<n;i++){
    cin >> a.at(i);
  }
  vector<long long> b(0);
  for (int i=0;i<n;i++){
    b.push_back(a.at(i));
    if (b.size() <= 1) continue;
    // if (b.at(b.size()-1) == b.at(b.size()-2)){
      // long long bf = b.at(b.size()-1) + 1;
      // int j = n - i - 1;
      while(b.at(b.size()-1) == b.at(b.size()-2)){
        b.pop_back();
        b.at(b.size()-1)++;
        if ((long long)b.size() - 2 < 0) break;
      }
    // }
  }
  cout << b.size() << endl;
  return 0;
}