/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int m; cin >> m;
  vector<string>s(m); 
  int h = 0;
  for (int i=0;i<m;i++){
    cin >> s.at(i);
    int si = s.at(i).size();
    h = max(h, si);
  }
  for (int i=0;i<h;i++){
    string ans = "";
    int cnt = 0;
    for (int j=0;j<m;j++){
      int si = s.at(m-j-1).size();
      if (si <= i){
        cnt++;
      } else{
        for (int k=0;k<cnt;k++) ans += '*';
        cnt = 0;
        ans += s.at(m-j-1).at(i);
      }
    }
    cout << ans << endl;
  }
  return 0;
}