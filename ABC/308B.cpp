/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<string>c(n);
  vector<string>d(m);
  for (int i=0;i<n;i++){
    cin >> c.at(i);
  }
  for (int i=0;i<m;i++){
    cin >> d.at(i);
  }
  map<string, int>color;
  int non;
  cin >> non;
  for (int i=0;i<m;i++){
    cin >> color[d.at(i)];
  }
  int ans = 0;
  for (int i=0;i<n;i++){
    if (!(color.count(c.at(i)))){
      ans += non;
    }else{
      ans += color[c.at(i)];
    }
  }
  cout << ans << endl;
  return 0;
}