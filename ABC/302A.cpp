#include <bits/stdc++.h>
using namespace std;


int main() {
  long long a,b;
  cin >> a >> b;
  long long ans = a/b;
  if (a%b) ans++;
  cout << ans;
  return 0;
}