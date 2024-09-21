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
  vector<long long>cntR(n);
  vector<long long>cntC(n);
  for (int i=0;i<n;i++) for (int j=0;j<n;j++) {
    if (s.at(i).at(j) == 'o') cntC.at(i)++;
    if (s.at(j).at(i) == 'o') cntR.at(i)++;
  }
  long long ans = 0;
  for (int i=0;i<n;i++) for (int j=0;j<n;j++){
    if (s.at(i).at(j) == 'o') ans += (cntR.at(j)-1) * (cntC.at(i)-1);
  }
  cout << ans << endl;
  return 0;
}