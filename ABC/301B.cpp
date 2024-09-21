/*
g++ 301B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

vector<int>ire (int i,vector<int>a,vector<int>b){
  int kig;
  if (a.at(i) > a.at(i+1)){
    kig = -1;
  }else{
    kig = 1;
  }
  for (int j=a.at(i);j!=a.at(i+1);j+=kig){
    b.push_back(j);
  }
  return b;
}

int main() {
  int n;
  cin >> n;
  vector<int>a(n);
  vector<int>b;
  for (int i=0;i<n;i++) cin >> a.at(i);
  for (int i=0;i<n-1;i++){
    b = ire(i,a,b);
  }
  b.push_back(a.at(a.size()-1));
  for (int i=0;i<b.size();i++) cout << b.at(i) << " ";
  return 0;
}