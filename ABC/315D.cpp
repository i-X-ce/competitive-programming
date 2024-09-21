/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);

  while(true){
    vector<string>chk(h);
    for (int i=0;i<h;i++) chk.at(i) = string(w, '.');
    for (int i=0;i<h;i++){
      char bfc = '.';
      int cnt = 0;
      for (int j=0;j<w;j++){
        if (s.at(i).at(j) != '.' && bfc == '.') bfc = s.at(i).at(j);
        if (s.at(i).at(j) != bfc) break;
        else cnt++;
      }
      if (cnt > 1) chk.at(i) = string(w, '#');
    }

    for (int j=0;j<w;j++){
      char bfc = '.';
      int cnt = 0;
      for (int i=0;i<h;i++){
        if (s.at(i).at(j) != '.' && bfc == '.') bfc = s.at(i).at(j);
        if (s.at(i).at(j) != bfc) break;
        else cnt++;
      }
      if (cnt > 1) for (int k=0;k<h;k++) chk.at(k).at(j) = '#';
    }

    int anscnt = 0, cnt = 0;
    for (int i=0;i<h;i++){
      for (int j=0;j<w;j++){
        if (chk.at(i).at(j) == '#'){
          s.at(i).at(j) = '.';
          cnt++;
        }
        if (s.at(i).at(j) == '.') anscnt++;
      }
    }
    if (cnt == 0){
      cout << anscnt << endl;
      return 0;
    }
  }
  return 0;
}