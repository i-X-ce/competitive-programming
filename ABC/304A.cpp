/*
g++ 304A.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;
  vector<string>s(n);
  vector<int>a(n);
  cin >> s.at(0) >> a.at(0);
  int cnta = 0, minn = a.at(0);
  for (int i=1;i<n;i++){
    cin >> s.at(i) >> a.at(i);
    if (a.at(i) < minn){
      cnta = i;
      minn = a.at(i);
    }
  }
  for (int i=0;i<n;i++){
    cout << s.at((cnta+i)%n) << endl;
  }
  return 0;
}