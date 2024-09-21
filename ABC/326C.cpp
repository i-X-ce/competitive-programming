/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  long long m;cin >> m;
  vector<long long>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  sort(a.begin(), a.end());

  int cntmax = 0;
  for (int i=0;i<n;i++){
    int cnt = 0, p = i;
    long long start = a.at(i);
    long long end = start + m;
    while (true)
    {
      if (a.at(p) < end){
        cnt++;
        p++;
      }else{
        break;
      }

      if (p + cntmax - cnt < n){
        if (!(a.at(p+cntmax-cnt) < end)) break;
      }

      if (p >= n) break;
    }
    cntmax = max(cntmax, cnt);
    if (p >= n){
      cout << cntmax << endl;
      return 0;
    }
  }
  return 0;
}