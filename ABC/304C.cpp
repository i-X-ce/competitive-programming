/*
g++ 304C.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void vir(vector<vector<int>>xy,vector<bool>&check,int a,int &n,int &d){
  for (int i=0;i<n;i++){ 
    if (i != a && check.at(i) == false){
      int kyori = pow(xy.at(a).at(0)-xy.at(i).at(0),2)+pow(xy.at(a).at(1)-xy.at(i).at(1),2);
      if (d*d >= kyori){
        check.at(i) = true;
        vir(xy,check,i,n,d);
      }
    }
  }
  return;
}

int main() {
  int n,d;
  cin >> n >> d;
  vector<vector<int>>xy(n,vector<int>(2));
  vector<bool>check(n,false);
  check.at(0) = true;
  for (int i=0;i<n;i++){
    cin >> xy.at(i).at(0) >> xy.at(i).at(1);
  }
  vir(xy,check,0,n,d);
  for (int i=0;i<n;i++){
    if (check.at(i)){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
  return 0;
}