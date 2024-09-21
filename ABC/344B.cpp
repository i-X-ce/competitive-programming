/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  vector<int>a(0);
  int cnt = 0;
  do{
    int bf;
    cin >> bf;
    a.push_back(bf);
    cnt++;
  }while(a.at(cnt-1) != 0);
  for (int i=0;i<a.size();i++){
    cout << a.at(a.size()-i-1) << endl;
  }
  return 0;
}