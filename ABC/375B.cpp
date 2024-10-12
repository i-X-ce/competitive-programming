/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

double calc(double x, double y, double x2, double y2){
  return sqrtl(powl(x-x2,2)+powl(y-y2,2));
}

int main() {
  int n; cin >> n;
  double ans = 0;
  double x = 0, y = 0;
  for (int i=0;i<n;i++){
    double x2, y2; cin >> x2 >> y2;
    ans += calc(x, y, x2, y2);
    x = x2; y = y2;
  }
  ans += calc(x, y, 0, 0);
  cout << fixed << setprecision(16) << ans << endl;
  return 0;
}