/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  sort(s.begin(), s.end(), [](string a, string b){
    return a.size() < b.size();
  });
  for (int i=0;i<s.size();i++) cout << s.at(i);
  cout << endl;
  return 0;
}