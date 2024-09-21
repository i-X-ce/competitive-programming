/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int win(char h){
  return h == 'R' ? hand('P') : (h == 'P' ? hand('S') : hand('R'));
}

int lose(char h){
  return h == 'R' ? hand('S') : (h == 'P' ? hand('R') : hand('P'));
}

int hand(char h){
  return h == 'R' ? 0 : (h == 'P' ? 1 : 2);
}

int main() {
  long long n;
  string s; cin >> n >> s;
  vector<vector<int>>ans(n, vector<int>(3, 0));
  for (int i=0;i<n;i++){
    for (int j=0;j<3;j++){
      if (lose(s.at(j)) == j){
        ans.at(i).at(j) == -1;
        continue;
      }
      for (int k=0;k<3;k++){
        if (ans.at(i-1).at(k) == -1) continue;
        long long value0, value1;
        value0 = ans.at(i-1).at(k) + isWin(s.at(i))
      }
    }
  }
  return 0;
}