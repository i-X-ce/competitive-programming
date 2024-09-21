/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<int>>a(n,vector<int>(2));
  vector<int>b(m);
  for (int i=0;i<n;i++) cin >> a.at(i).at(0);
  for (int i=0;i<m;i++) cin >> b.at(i);
  bool ok = false;
  int gon = n;
  int hito = 0;
  while(!ok){
    if (a.at(gon%n).at(0)-b.at(hito) >= 0){
      a.at(gon%n).at(1) += b.at(hito);
      gon++;
      b.at(hito) = 0;
      hito++;
      if (hito == m) ok = true;
    }else{
      a.at(gon%n).at(1) += a.at(gon%n).at(0);
      b.at(hito) -= a.at(gon%n).at(0);
      gon++;
    }
  }
  for (int i=0;i<n;i++) cout << a.at(i).at(1) << endl;
  return 0;
}