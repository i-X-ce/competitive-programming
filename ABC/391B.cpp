/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<string>s(n), t(m);
  for (int i=0;i<n;i++){
    cin >> s.at(i);
  }
  for (int i=0;i<m;i++){
    cin >> t.at(i);
  }
  for (int i=0;i<n-m+1;i++){
    for (int j=0;j<n-m+1;j++){
      bool ok = true;
      for (int ii=0;ii<m;ii++) for (int jj=0;jj<m;jj++){
        if (s.at(i+ii).at(j+jj) != t.at(ii).at(jj)) ok = false;
      }
      if (ok){
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }

  return 0;
}