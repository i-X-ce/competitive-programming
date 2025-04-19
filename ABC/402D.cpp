/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

long long con(long long a) {
  return a * (a - 1) / 2;
}

int main() {
  long long n, m; cin >> n >> m;
  vector<long long> group(n, 0);
  for (long long i=0;i<m;i++){
    long long a, b; cin >> a >> b;
    long long g = (a + b) % n;
    group.at(g)++;
  }
  long long ans = con(m);
  for (long long i=0;i<n;i++){
    ans -= con(group.at(i));
  }
  cout << ans << endl;
  return 0;
}