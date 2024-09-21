/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n,m;cin >> n >> m;
  vector<long long>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  sort(a.begin(),a.end());
  long long dsum = 0, pre = 0, presum = 0;
  for (int i=0;i<n;i++){
    if (a.at(i) == pre) continue;
    long long l = distance(a.begin(),lower_bound(a.begin(), a.end(), a.at(i)));
    dsum += (a.at(i) - pre) * l;
    long long sum = n * a.at(i) - dsum;

    if (sum > m){
      if (i-1 < 0){
        cout << m / n << endl;
        return 0;
      }
      
      cout << a.at(i-1) + (m - presum) / (n - l) << endl;
      return 0;
    }

    pre = a.at(i);
    presum = sum;
  }
  cout << "infinite" << endl;
  return 0;
}