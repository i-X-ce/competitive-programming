/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  vector<string>kt(9);
  kt = {
    {"###.00000"},
    {"###.00000"},
    {"###.00000"},
    {"....00000"},
    {"000000000"},
    {"00000...."},
    {"00000.###"},
    {"00000.###"},
    {"00000.###"}
    };

  for (int i=0;i<n-7;i++){
    for (int j=0;j<m-7;j++){
      bool ok = true;
      for (int k=0;k<9;k++){
        for (int l=0;l<9;l++){
          if (s.at(i+k).at(j+l) != kt.at(k).at(l) && kt.at(k).at(l) != '0'){
            ok = false;
            break;
          }
        }
        if (!ok) break;
      }
      if (ok) cout << i+1  << " " << j+1 << endl;
    }
  }
  return 0;
}