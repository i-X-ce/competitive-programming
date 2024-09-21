/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int kensaku(int vx,int vy,int y,int x,vector<string> &s,int &h,int &w){
  string snuke = "snuke";
  vector<vector<int>>ans(5,vector<int>(2));
  int cnt = 0;
  for (int i=0;i<5;i++){
    if (s.at(y).at(x) != snuke.at(i)){
      return 0;
    }else{
      ans.at(i).at(0) = x;
      ans.at(i).at(1) = y;
      x += vx;
      y += vy;
      cnt++;
    }
    if(x < 0 || x >= w || y < 0 || y >= h) break;
  }
  if (cnt == 5){
    for (int j=0;j<5;j++){
      cout << ans.at(j).at(1)+1 << " " << ans.at(j).at(0)+1 << endl;
    }
    return 1;
  }
  return 0;
}

int main() {
  int h,w;
  cin >> h >> w;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      for (int y=-1;y<2;y++){
        for (int x=-1;x<2;x++){
          if (kensaku(x,y,i,j,s,h,w)) return 0;
        }
      }
    }
  }
  return 0;
}