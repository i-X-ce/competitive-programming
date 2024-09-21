/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  vector<int>d(m);
  int cnt = 0;
  for (int i=0;i<m;i++){
    cin >> d.at(i);
    cnt += d.at(i);
  }
  cnt /= 2;
  for (int i=0;i<m;i++){
    for (int j=1;j<=d.at(i);j++){
      if (cnt == 0){
        cout << i + 1 << " " << j << endl;
      }
      cnt--;
    }
  }
  return 0;
}