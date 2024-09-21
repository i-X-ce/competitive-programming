/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, q;
  cin >> n >> q;
  string s; cin >> s;
  long long cnt = 0;
  for (int i=0;i<n-2;i++){
    if (s.at(i) == 'A' && s.at(i+1) == 'B' && s.at(i+2) == 'C') cnt++;
  }
  for (int i=0;i<q;i++){
    int x; char c;
    cin >> x >> c;
    for (int j=0;j<3;j++){
      int p = x-3+j;
      if (p < 0 || p+2 >= n) continue;
      if (s.at(p) == 'A' && s.at(p+1) == 'B' && s.at(p+2) == 'C') cnt--;
    }
    s.at(x-1) = c;
    for (int j=0;j<3;j++){
      int p = x-3+j;
      if (p < 0 || p+2 >= n) continue;
      if (s.at(p) == 'A' && s.at(p+1) == 'B' && s.at(p+2) == 'C') cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}