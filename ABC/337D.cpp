/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int h, w, k; cin >> h >> w >> k;
  vector<string>s(h);
  for (int i=0;i<h;i++) cin >> s.at(i);
  int minCnt = k+1;
  for (int i=0;i<h;i++){
    int oCnt = 0, blank = 0;
    for (int j=-k;j<w-k;j++){
      if (s.at(i).at(j+k) == 'x'){
        blank = 0;
      }else if (s.at(i).at(j+k) == 'o'){
        oCnt++;
        blank++;
      }else blank++;
      if (j-1 < 0){
        if (blank >= k) minCnt = min(max(0,k-oCnt), minCnt);
        continue;
      }
      char bfch = s.at(i).at(j-1);
      if (bfch == 'o' || bfch == '.'){
        if (blank > k){
          blank = k;
          if (bfch == 'o') oCnt--;
        }
      }
      if (blank >= k) minCnt = min(max(0,k-oCnt), minCnt);
    }
  }
  for (int i=0;i<w;i++){
    int oCnt = 0, blank = 0;
    for (int j=-k;j<h-k;j++){
      if (s.at(j+k).at(i) == 'x'){
        blank = 0;
      }else if (s.at(j+k).at(i) == 'o'){
        oCnt++;
        blank++;
      }else blank++;
      if (j-1 < 0){
        if (blank >= k) minCnt = min(max(0,k-oCnt), minCnt);
        continue;
      }
      char bfch = s.at(j-1).at(i);
      if (bfch == 'o' || bfch == '.'){
        if (blank > k){
          blank = k;
          if (bfch == 'o') oCnt--;
        }
      }
      if (blank >= k) minCnt = min(max(0,k-oCnt), minCnt);
    }
  }
  if (minCnt >= k+1) cout << -1 << endl;
  else cout << minCnt << endl;
  return 0;
}