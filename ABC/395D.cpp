/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, q; cin >> n >> q;
  vector<long long*>hato(n);
  vector<long long>su(n);
  map<long long, long long>swap;
  for (long long i=0;i<n;i++){
    su.at(i) = i;
    hato.at(i) = &su.at(i);
    swap[i] = i;
  }

  for (long long i=0;i<q;i++){
    int op; cin >> op;
    if (op == 1){
      long long a, b ; cin >> a >> b;
      a--; b--;
      b = swap[b];
      hato.at(a) = &su.at(b);
    } else if (op == 2){
      long long a, b; cin >> a >> b;
      a--; b--;
      long long sa = swap[a];
      long long sb = swap[b];
      su.at(sa) = b;
      su.at(sb) = a;
      swap[a] = sb;
      swap[b] = sa;
    } else {
      long long a; cin >> a;
      a--;
      cout << *hato.at(a) + 1 << endl; 
    }
  }
  return 0;
}