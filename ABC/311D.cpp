/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int dx[] ={0, 1, 0, -1}; 
int dy[] ={1, 0, -1, 0}; 

void saiki(vector<vector<char>>&s, vector<vector<char>>&ashi ,int x, int y){
  for (int i=0;i<4;i++){
    int cnt = 0;
    int bx = x, by = y;
    while(true){
      bx += dx[i];
      by += dy[i];
      if (s.at(by).at(bx) == '#'){
        bx -= dx[i];
        by -= dy[i];
        break;
      }
      else{
        if (ashi.at(by).at(bx)){
          cnt++;
          ashi.at(by).at(bx) = false;
        } 
      }
    }
    if (cnt == 0) continue;
    else{
      saiki(s,ashi,bx,by);
    }
  }
}

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<char>>ashi(n,vector<char>(m));
  vector<vector<char>>s(n,vector<char>(m));
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++) cin >> s.at(i).at(m);
  }
  saiki(s, ashi, 1, 1);
  int cnt = 0;
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++) cnt++;
  }
  cout << cnt << endl;
  return 0;
}