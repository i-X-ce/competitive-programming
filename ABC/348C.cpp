/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  map<long long, long long>mina;
  for (int i=0;i<n;i++){
    long long a, c; cin >> a >> c;
    if (mina.count(c)) mina[c] = min(mina[c], a);
    else mina[c] = a;
  }
  long long maxa = 0;
  for (auto ac : mina){
    maxa = max(maxa, ac.second);
  }
  cout << maxa << endl;
  return 0;
}