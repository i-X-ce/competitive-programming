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
  vector<pair<int, int>>result(n);
  for (int i=0;i<n;i++){
    result.at(i) = make_pair(0, i+1);
  }

  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (s.at(i).at(j) == 'x') result.at(i).first++;
    }
  }
  stable_sort(result.begin(), result.end());

  for (int i=0;i<n;i++) cout << result.at(i).second << endl;

  return 0;
}