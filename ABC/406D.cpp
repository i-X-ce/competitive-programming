/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void Yes() {
  cout << "Yes" << endl;
}

void No() {
  cout << "No" << endl;
}

int main() {
  long long h, w, n; cin >> h >> w >> n;
  vector<set<long long>> ym(h), xm(w);
  for (long long i=0;i<n;i++){
    long long x, y; cin >> x >> y;
    x--; y--;
    ym.at(y).insert(x);
    xm.at(x).insert(y);
  }
  long long q; cin >> q;
  for (int i=0;i<q;i++){
    int qu; cin >> qu;
    if (qu == 1){
      long long x; cin >> x;
      x--;
      cout << ym.at(x).size() << endl;
      
    } else if (qu == 2){

    }
  }
  return 0;
}