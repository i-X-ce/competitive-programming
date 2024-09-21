/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  vector<vector<long long>>sum(2, vector<long long>(n+1));
  vector<long long>a(n+1); for (int i=1;i<=n;i++) cin >> a.at(i);
  for (int i=1;i<=n;i++){
    sum.at(0).at(i) = max({sum.at(0).at(i-1), sum.at(1).at(i-1)+a.at(i)});
    sum.at(1).at(i) = max({sum.at(1).at(i-1), sum.at(0).at(i-1)+(i == 1 ? 0 : a.at(i)*2)});
    // for (int j=0;j<2;j++){
    //   for (int k=0;k<=n;k++){
    //     cout << sum.at(j).at(k) << " ";
    //   }
    //   cout << endl;
    // }
  }
  cout << max({sum.at(0).at(n), sum.at(1).at(n)}) << endl;
  return 0;
}