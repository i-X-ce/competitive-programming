/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


long long make(long long a){
  long long cnt = 1;
  long long ans = 0;
  for (int i=0;i<a;i++){
    ans += cnt;
    cnt *= 10;
  }
  return ans;
}

int main() {
  long long n; cin >> n;
  // long long ans = make((n-1)/3 + 1)*3 - make((n-1)/3 + 1) * ((n-1)%3) + make((n-1)/3 + 2) * ((n-1)%3);
  set<long long>st;
  for (int x=1;x<50;x++){
    for (int i=0;i<x;i++){
      for (int j=0;j<x-i;j++){
        if (i+1 > 12 || j+1 > 12 || x-i-j > 12) continue;
        long long bfans = make(i+1) + make(j+1) + make(x-i-j);
        if (bfans < 0) continue;
        st.insert(bfans);
      }
    }
  }
  int cnt = 0;
  for (auto bf : st){
    cnt++;
    if (cnt == n) cout << bf << endl;
  }
  return 0;
}