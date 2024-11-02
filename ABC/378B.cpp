/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  vector<vector<long long>>q(n, vector<long long>(2));
  for (int i=0;i<n;i++){
    cin >> q.at(i).at(0) >> q.at(i).at(1);
  }
  long long Q; cin >> Q;
  for (int i=0;i<Q;i++){
    long long t, d; cin >> t >> d;
    long long ans = (d/q.at(t-1).at(0))*q.at(t-1).at(0) + q.at(t-1).at(1);
    if (d % q.at(t-1).at(0) <= q.at(t-1).at(1)) cout << ans << endl;
    else cout << ans + q.at(t-1).at(0) << endl;
  }
  return 0;
}