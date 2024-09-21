#include <bits/stdc++.h>
using namespace std;
/*
g++ XXX.cpp
./a.out
*/

int main() {
  int n,q;
  cin >> n >> q;
  vector<vector<int>>s(n,vector<int>(2,0));
  for (int i=0;i<q;i++){
    int e,x;
    cin >> e >> x;
    if (e == 1){
      s.at(x-1).at(0)++;
    }else{
      if (e == 2){
        s.at(x-1).at(1)++;
      }else{
        if(s.at(x-1).at(0) >= 2 || s.at(x-1).at(1) >= 1){
          cout << "Yes" << endl;
        }else{
          cout << "No" << endl;
        }
      }
    }
  }
  return 0;
}