/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<int>a(n), b(m);
  for (int i=0;i<n;i++) cin >> a.at(i);
  for (int i=0;i<m;i++) cin >> b.at(i);
  sort(a.begin(), a.end()); sort(b.begin(), b.end());
  long long ans = 0;
  int ain; ain = 0;
  for (int i=0;i<m;i++){
    if (ain >= n){
      cout << -1 << endl;
      return 0;
    }
    while(a.at(ain) < b.at(i)){
      ain++;
      if(ain >= n){
        cout << -1 << endl;
        return 0;
      }
    }
    ans += a.at(ain);
    ain++;
  }
  cout << ans << endl;
  return 0;
}