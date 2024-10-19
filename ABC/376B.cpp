/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, q; cin >> n >> q;
  int l = 0, r = 1;
  int ans = 0;
  for (int i=0;i<q;i++){
    char h; int t; cin >> h >> t; t--;
    int ta, va;
    if (h == 'L'){
      ta = l; va = r;
    } else {
      ta = r; va = l;
    }
    cout << h << " (" << ta << ") ";
    // if (ta > va) {
    //   while(t != (ta%n+n)%n){
    //     ta++;
    //     ans++;
    //     cout << (ta%n+n)%n << " ";
    //   }
    // }else{
    //   while(t != (ta%n+n)%n){
    //     ta--;
    //     ans++;
    //     cout << (ta%n+n)%n << " ";
    //   }
    // }
    if (t < va && ta < va || t > va && ta > va){
      ans += abs(t - ta);
    }else{
      ans += min(ta+n-t, t+n-ta);
    }
    cout << endl;
    if (h == 'L') l = t;
    else r = t;
  }
  cout << ans << endl;
  return 0;
}