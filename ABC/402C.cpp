/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, m; cin >> n >> m;
  vector<vector<long long>>ryouri(m);
  for (long long i=0;i<m;i++){
    long long k; cin >> k;
    vector<long long>r(k);
    for (long long j=0;j<k;j++){
      cin >> r.at(j);
    }
    ryouri.at(i) = r;
  }
  map<long long, long long> nigate;
  for (long long i=0;i<n;i++){
    long long b; cin >> b;
    nigate[b] = i;
  }
  vector<long long> ryouriN(m, -1);
  map<long long, long long> N;
  for (long long i=0;i<m;i++) {
    for (long long j=0;j<ryouri.at(i).size();j++) {
      ryouriN.at(i) = max(nigate[ryouri.at(i).at(j)], ryouriN.at(i));
    }
    N[ryouriN.at(i)]++;
  }
  long long ans = 0;
  for (long long i=0;i<n;i++){
    ans += N[i];
    cout << ans << endl;
  }
  return 0;
}