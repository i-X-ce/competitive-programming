/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; string s; cin >> n >> s;
  if (n%2 != 1){
    cout << -1 << endl;
    return 0;
  }
  int pa;
  if (s.at(0) == 'a' && s.at(n-1) == 'c') pa = 1;
  else if (s.at(0) == 'c' && s.at(n-1) == 'a') pa = 2;
  else if (s.at(0) == 'b' && s.at(n-1) == 'b') pa = 0;
  else{
    cout << -1 << endl;
    return 0;
  }
  int cnt = 0;
  for (int i=0;i<(n/2)+1;i++){
    bool ok;
    if (pa % 3 == 0){
      ok = (s.at(i) == 'b' && s.at(n-i-1) == 'b');
    }
    else if (pa % 3 == 1){
      ok = (s.at(i) == 'a' && s.at(n-i-1) == 'c');
    }
    else if (pa % 3 == 2){
      ok = (s.at(i) == 'c' && s.at(n-i-1) == 'a');
    }
    if (!ok){
      cout << -1 << endl;
      return 0;
    }
    cnt++;
    pa += 2;
  }
  cout << cnt - 1 << endl;
  return 0;
}