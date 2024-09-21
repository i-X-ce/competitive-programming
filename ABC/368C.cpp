/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>h(n);
  for (int i=0;i<n;i++) cin >> h.at(i);
  long long ans = 0;
  for (int i=0;i<n;i++){
    int hbf = h.at(i);
    ans += (hbf / 5) * 3; hbf %= 5;
    while(true){
      if (hbf > 0){
        ans++;
        hbf -= ans%3 == 0 ? 3 : 1;
      }else break;
    }
  }
  cout << ans << endl;
  return 0;
}