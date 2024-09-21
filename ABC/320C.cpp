/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int m; cin >> m;
  vector<string>s(3);
  vector<int>ans(10);
  cin >> s.at(0) >> s.at(1) >> s.at(2);
  s.at(0) = s.at(0) + s.at(0) + s.at(0);
  s.at(1) = s.at(1) + s.at(1) + s.at(1);
  s.at(2) = s.at(2) + s.at(2) + s.at(2);
  for (int i=0;i<10;i++){
    bool ok0 = false, ok1 = false, ok2 = false;
    int ansbf = -1;
    for (int j=0;j<m*3;j++){
      if (ok0 && ok1 && ok2) break;
      if (s.at(0).at(j) == '0'+i && ok0 == false){
        ok0 = true;
        ansbf = j;
        continue;
      }
      if (s.at(1).at(j) == '0'+i && ok1 == false){
        ok1 = true;
        ansbf = j;
        continue;
      }
      if (s.at(2).at(j) == '0'+i && ok2 == false){
        ok2 = true;
        ansbf = j;
        continue;
      }
    }
    ans.at(i) = ansbf;
  }
  sort(ans.begin(), ans.end());
  for (int i=0;i<10;i++){
    if (ans.at(i) != -1 && ans.at(i) != 0){
      cout << ans.at(i) << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}