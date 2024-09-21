/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n,m;
  cin >> n >> m;
  int h,w;
  cin >> h >> w;
  vector<vector<int>>hatake(h,vector<int>(w));
  vector<int>shurui(m);
  for (int i=0;i<n;i++){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    for (int j=0;j<b-a+1;j++){
      for (int k=0;k<d-c+1;k++){
        if (hatake.at(j+a-1).at(k+c-1) != 0){
          shurui.at(hatake.at(j+a-1).at(k+c-1)-1)++;
        }
        hatake.at(j+a-1).at(k+c-1) = e;
      }
    }
  }
  for (int i=0;i<m;i++) cout << shurui.at(i) << endl;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      if (hatake.at(i).at(j) == 0){
        cout << ".";
      }else{
        cout << hatake.at(i).at(j);
      }
    }
    cout << endl;
  }
  return 0;
}