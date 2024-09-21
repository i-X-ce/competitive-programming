/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<int>a(n);
  vector<int>b(m);
  for (int i=0;i<n;i++) cin >> a.at(i);
  for (int i=0;i<m;i++) cin >> m.at(i);
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());

  int bmax = 0;
  for (int i=0;i<n;i++){
    while(a.at(i) >= b.at(bmax)){
      bmax++;
    }
    if (i >= bmax){
      if (bmax == 0){
        cout << a.at(i)+1;
      }else cout << a.at(i);
      break;
    }
  }
  return 0;
}