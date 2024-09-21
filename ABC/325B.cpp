/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<long long>sum(24);

  for (int i=0;i<n;i++){
    int w, x;
    cin >> w >> x;
    for (int j=0;j<9;j++){
      sum.at((j+x)%24) += w;
    }
  }
  sort(sum.rbegin(), sum.rend());
  cout << sum.at(0) << endl;
  return 0;
}