/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<bool>t(n, false);
  for (int i=0;i<m;i++){
    int a; char b;
    cin >> a >> b; a--;
    if (b == 'M'){
      if (!t.at(a)) cout << "Yes" << endl;
      else cout << "No" << endl;
      t.at(a) = true;
    }else{
      cout << "No" << endl;
    }
  }
  return 0;
}