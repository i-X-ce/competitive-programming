/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void Yes() {
  cout << "Yes" << endl;
}

void No() {
  cout << "No" << endl;
}

int main() {
  long long t; cin >> t;
  for (long long i=0;i<t;i++) {
    long long n; cin >> n;
    string s; cin >> s;
    vector<vector<long long>> dp(n, vector<long long>(2)), cost(n, vector<long long>(2));
    cost.at(1).at(0) = 1;
    for (long long j=1;j<n;j++) {
      bool diff = s.at(j) != s.at(j-1);
      long long value0 = dp.at(0).at(j-1)
      dp.at()
    }

    // s += '0';
    // int index = s.find('1');
    // if (index == -1) {
    //   // cout << "test: " << 0 << endl;
    //   cout << 0 << endl;
    //   continue;
    // }
    // // vector<long long> p(0);
    // vector<long long> maxs(2), sums(2);
    // long long prei = index;
    // for (long long j=max(1, index);j<s.size();j++) {
    //   if (s.at(j-1) != s.at(j)){
    //     // p.push_back(j);
    //     long long value = s.at(j-1) - '0';
    //     maxs.at(value) = max(maxs.at(value), j - prei);
    //     sums.at(value) += j - prei;
    //     prei = j;
    //   }
    // }
    // long long ans = min(sums.at(0), sums.at(1) - maxs.at(1));
    // cout << ans << endl;
    // // cout << "test: " <<  ans << endl;
  }
  return 0;
}