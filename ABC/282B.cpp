/*
g++ 282B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int check(int num,int n,int m,vector<string>s){
  int cnt = 0;
  for (int i=0;i<n;i++){
    int ok = 0;
    if (num != i){
      for (int j=0;j<m;j++){
        if (s.at(num).at(j) == 'o' || s.at(i).at(j) == 'o'){
          ok = 1;
        }else{
          ok = 0;
          break;
        }
      }
    }
    cnt += ok;
  }
  return cnt;
}

int main() {
  int n,m;
  cin >> n >> m;
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  int cnt = 0;
  for (int i=0;i<n;i++){
     cnt += check(i,n,m,s);
  }
  cout << cnt/2;
  return 0;
}