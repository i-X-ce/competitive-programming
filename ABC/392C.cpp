/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  vector<long long> hito(n);
  map<long long, long long> zekken; // [zekken]=hito
  map<long long, long long> zekken2; // [hito]=zekken
  for (long long i=0;i<n;i++) {
    long long h; cin >> h; h--;
    hito.at(i) = h;
  }
  for (long long i=0;i<n;i++){
    long long z; cin >> z; z--;
    zekken[z] = i;
    zekken2[i] = z;
  }
  for (long long i=0;i<n;i++){
    cout << zekken2[hito.at(zekken[i])] + 1 << " ";
  }
  cout << endl;
  return 0;
}