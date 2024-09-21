/*
g++ 287B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<string>s(n);
  vector<string>t(m);
  vector<int>a(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  for (int i=0;i<m;i++) cin >> t.at(i);
  int cnt = 0;
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      if (s.at(i).rfind(t.at(j)) == s.at(i).size() - t.at(j).size()){
        a.at(i) = 1;
      }
    }
  }
  for (int i=0;i<n;i++) cnt += a.at(i);
  cout << cnt;
  return 0;
}