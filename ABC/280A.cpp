/*
g++ 280A.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  int sum = 0;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      if (s.at(i).at(j) == '#') sum++;
    }
  }
  cout << sum;
  return 0;
}