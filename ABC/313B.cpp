/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<int>a(n+1);

  for (int j=0;j<m;j++){
    int bf;
    cin >> bf >> bf;
    a.at(bf)++;
  }

  int cnta = 0;
  for (int i=1;i<=n;i++){
    if (a.at(i) == 0){
      if (cnta != 0){
        cout << -1 << endl;
        return 0;
      }
      cnta = i;
    }
  }
  cout << cnta << endl;
  return 0;
}