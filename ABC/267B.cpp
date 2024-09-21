/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  if (s.at(0) != '0'){
    cout << "No" << endl;
    return 0;
  }

  vector<bool>row(7);
  if (s.at(6) == '1') row.at(0) = true;
  if (s.at(3) == '1') row.at(1) = true;
  if (s.at(1) == '1' || s.at(7) == '1') row.at(2) = true;
  if (s.at(0) == '1' || s.at(4) == '1') row.at(3) = true;
  if (s.at(2) == '1' || s.at(8) == '1') row.at(4) = true;
  if (s.at(5) == '1') row.at(5) = true;
  if (s.at(9) == '1') row.at(6) = true;

  //cout << row.at(4) << endl << row.at(5) << endl;
  int cntrow = 0;
  while(true){
    if (row.at(cntrow) && !row.at(cntrow+1)) break;
    cntrow++;
    if (cntrow >= 6) break;
  }
      for (int i=0;i<7;i++) cout << row.at(i);

  if (cntrow >= 6){
    cout << "No" << endl;
    return 0;
  }

  for (int i=cntrow;i<7;i++){
    if (row.at(i)){
      cout << "Yes" << endl;
      return 0;
    }
  }
  
  cout << "No" << endl;
  return 0;
}