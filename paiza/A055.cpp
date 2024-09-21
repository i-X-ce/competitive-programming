/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

bool hantei(int y,int x,int h,int w,vector<string>&s, bool &ok){
  if (y < 0 || y >= h || x < 0 || x >= w){
    ok = true;
    return true;
  }
  if (s.at(y).at(x) == '#') return false;
  s.at(y).at(x) = '#';
  hantei(y-1,x,h,w,s,ok);
  hantei(y+1,x,h,w,s,ok);
  hantei(y,x-1,h,w,s,ok);
  hantei(y,x+1,h,w,s,ok);
  return false;
}

int main() {
  int h,w;
  cin >> h >> w;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  int y,x;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      if (s.at(i).at(j) == 'S'){
        y = i; x = j; i = h;
        break;
      }
    }
  }
  bool ok = false;
  hantei(y,x,h,w,s,ok);
  if (ok){
    cout << "YES";
  }else{
    cout << "NO";
  }
  return 0;
}