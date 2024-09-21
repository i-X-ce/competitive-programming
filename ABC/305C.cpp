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
  int hmax = 0,wmax = 0;
  int hs = 501,ws = 501;
  for (int i=0;i<h;i++){
    int wstart = s.at(i).find('#');
    int wend = s.at(i).rfind('#');
    wmax = max(wmax,wend-wstart);
    if (s.at(i).find('#') != -1){
      hmax++;
      int wstart2 = s.at(i).find('#');
      ws = min(ws,wstart2);
      hs = min(i,hs);
    }
  }
  //cout << ws << endl << hs << endl;
  for (int i=hs;i<hs+hmax+1;i++){
    for (int j=ws;j<ws+wmax+1;j++){
      if (s.at(i).at(j) == '.'){
        cout << i+1 << " " << j+1 << endl;
        return 0;
      }
    }
  }
  return 0;
}