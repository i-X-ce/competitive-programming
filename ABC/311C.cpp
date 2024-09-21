/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  vector<int>b(m+1);
  vector<int>ashi(m+1);
  for (int i=1;i<=m;i++) cin >> b.at(i);
  bool ok = false;
  int num = 1,cnt = 0;
  while(!ok){
    cnt++;
    if (ashi.at(num) == 0){
      ashi.at(num) = cnt;
      num = b.at(num);
    }else{
      ok = true;
      cnt = cnt - ashi.at(num);
      num = b.at(num);
    }
  }
  cout << cnt << endl;
  for (int i=0;i<cnt;i++){
    cout << num << " ";
    num = b.at(num);
  }
  return 0;
}