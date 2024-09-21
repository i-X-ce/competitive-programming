/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<int>>p(n,vector<int>(m+1));
  for (int i=0;i<n;i++){
    cin >> p.at(i).at(0);
    int c;
    cin >> c;
    for (int j=0;j<c;j++){
      int f; cin >> f;
      p.at(i).at(f) = 1;
    }
  }
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (i == j) continue;
      if (p.at(i).at(0) < p.at(j).at(0)){
        continue;
      }else{
        int isum = 0, jsum = 0;
        for (int k=0;k<m;k++){
          if (p.at(i).at(k+1) > p.at(j).at(k+1)){
            isum = -1;
            break;
          }else{
            isum += p.at(i).at(k+1); jsum += p.at(j).at(k+1);
          }
        }
        if (isum < 0){
          continue;
        }else{
          if ((p.at(i).at(0) > p.at(j).at(0)) && isum == jsum){
            cout << "Yes" << endl; return 0;
          }
          if (isum < jsum){
            cout << "Yes" << endl; return 0;
          }
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}