/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<int> x(m), a(m);
  for (int i=0;i<m;i++) cin >> x.at(i);
  for (int i=0;i<m;i++) cin >> a.at(i);
  long long ans = 0, sum = 0, px = 1;
  for (int i=0;i<m;i++){
    long long dif = x.at(i) - px;
    sum -= dif;
    sum += a.at(i);
    ans += dif * (dif - 1) / 2 + dif * sum;
    cout << "ans:" << ans << " sum:" << sum << " dif:" << dif << endl;
    if (sum < 0){
      cout << -1 << endl;
      return 0;
    }
    px = x.at(i);
  }
  cout << ans << endl;
  return 0;
}