/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m, k; cin >> n >> m >> k;
  vector<bool>opf(m);
  vector<bitset<15>>a(m);
  for (int i=0;i<m;i++){
    int c; cin >> c;
    for (int j=0;j<c;j++){
      int abf; cin >> abf;
      a.at(i).set(abf-1);
    }
    char cbf; cin >> cbf;
    opf.at(i) = (cbf == 'o');
  }
  int cnt = 0;
  for (int i=0;i<(1<<n);i++){
    bitset<15> kchk(i);
    bool ok = true;
    for (int j=0;j<m;j++){
      bitset<15>bf = kchk & a.at(j);
      if (opf.at(j)){
        if (bf.count() < k) ok = false;
      }else{
        if (bf.count() >= k) ok = false;
      }
    }
    if (ok) cnt++;
  }
  cout << cnt << endl;
  return 0;
}