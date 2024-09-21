/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void rotatet(vetor<vector<vector<char>>>&p){
  for (int i=1;i<=3;i++){
    for (int j=1;j<=3;j++) p.at(i).at(0).at(j+1) = p.at(i-1).at(0).at(j);
    for (int j=1;j<=3;j++) p.at(i).at(j).at(3) = p.at(i-1).at(j-1).at(3);
    for (int j=1;j<=3;j++) p.at(i).at(3).at(3-j) = p.at(i-1).at(3).at(4-j);
    for (int j=1;j<=3;j++) p.at(i).at(3-j).at(0) = p.at(i-1).at(4-j).at(0);
    p.at(i).at(1).at(1) = p.at(i-1).at(2).at(1);
    p.at(i).at(1).at(2) = p.at(i-1).at(1).at(1);
    p.at(i).at(2).at(2) = p.at(i-1).at(1).at(2);
    p.at(i).at(2).at(1) = p.at(i-1).at(2).at(2);
  }
}

int main() {
  vector<vector<vector<char>>>p0(4, vector<vector<char>>(4, vector<char>(4)));
  vector<vector<vector<char>>>p1(4, vector<vector<char>>(4, vector<char>(4)));
  vector<vector<vector<char>>>p2(4, vector<vector<char>>(4, vector<char>(4)));
  for (int i=0;i<4;i++) for (int j=0;j<4;j++) cin >> p0.at(0).at(i).at(j);
  for (int i=0;i<4;i++) for (int j=0;j<4;j++) cin >> p1.at(0).at(i).at(j);
  for (int i=0;i<4;i++) for (int j=0;j<4;j++) cin >> p2.at(0).at(i).at(j);
  // rotatet(p0);
  // rotatet(p1);
  // rotatet(p2);
  return 0;
}

