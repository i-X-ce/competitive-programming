/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  vector<vector<int>>a(9, vector<int>(9));
  for (int i=0;i<9;i++) for (int j=0;j<9;j++) cin >> a.at(i).at(j);

  //行のチェック
  for (int i=0;i<9;i++){
    vector<bool>chk(9, false);
    for (int j=0;j<9;j++){
      if (!chk.at(a.at(i).at(j)-1)){
        chk.at(a.at(i).at(j)-1) = true;
      }else{
        cout << "No" << endl;
        return 0;
      }
    }
  }
  //列のチェック
  for (int i=0;i<9;i++){
    vector<bool>chk(9, false);
    for (int j=0;j<9;j++){
      if (!chk.at(a.at(j).at(i)-1)){
        chk.at(a.at(j).at(i)-1) = true;
      }else{
        cout << "No" << endl;
        return 0;
      }
    }
  }
  //グループのチェック
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      vector<bool>chk(9, false);
      for (int k=i*3;k<i*3+3;k++){
        for (int l=j*3;l<j*3+3;l++){
          if (!chk.at(a.at(k).at(l)-1)){
            chk.at(a.at(k).at(l)-1) = true;
          }else{
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}