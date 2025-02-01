/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, q; cin >> n >> q;
  map<long long, long long> su, hato;
  for (int i=0;i<n;i++){
    su[i] = 1;
    hato[i] = i;
  }
  int cnt = 0;
  for (int i=0;i<q;i++){
    int id; cin >> id;
    if (id == 1){
      long long p, h; cin >> p >> h;
      p--; h--;
      su[hato[p]]--;
      if (su[hato[p]] == 1) cnt--;
      su[h]++;
      if (su[h] == 2) cnt++;
      hato[p] = h;
    } else {
      cout << cnt << endl;
    }
  }
  return 0;
}