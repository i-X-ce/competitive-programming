/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  vector<unordered_map<long long, long long>> dice(n); //[目]=個数
  vector<long long> sizes(n);
  for (long long i=0;i<n;i++){
    long long k; cin >> k;
    sizes.at(i) = k;
    for (long long j=0;j<k;j++){
      long long a; cin >> a;
      dice.at(i)[a]++;
    }
  }
  double ans = 0;
  for (long long i=0;i<n;i++){
    for (long long j=i+1;j<n;j++){
      double sum = 0;
      auto &dice1 = dice.at(i);
      auto &dice2 = dice.at(j);
      for (auto p1 : dice1){
        if (!dice2.count(p1.first)) continue;
        sum += (p1.second / (double)sizes.at(i)) * (dice2[p1.first] / (double)sizes.at(j));
      }
      ans = max(ans, sum);
    }
  }
  cout << fixed << setprecision(20);
  cout << ans << endl;
  return 0;
}