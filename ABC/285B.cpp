/*
g++ 285B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  for (int i=0;i<n-1;i++){
    int cnt=0;
    for (int j=0;j<n-i-1;j++){
      if (s.at(j) != s.at(j+i+1)){
        cnt++;
      }else{
        break; 
      }
    }
    cout << cnt << endl;
  }
  return 0;
}