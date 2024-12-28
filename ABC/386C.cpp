/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int k; cin >> k;
  string s, t; cin >> s >> t;
  int ss = s.size(), ts = t.size();
  if (abs(ss - ts) > k){
    cout << "No" << endl;
    return 0;
  }
  int ofs = 0, oft = 0, cnt = 0;
  for (int i=0;i<max(s.size(), t.size());i++){
    if (i+ofs >= s.size() || i + oft >= t.size() ||  s.at(i + ofs) != t.at(i + oft)){
      if (cnt >= k){
        cout << "No" << endl;
        return 0;
      }
      cnt++;
      if (s.size() == t.size()) continue;
      if (s.size() > t.size()) oft--;
      else ofs--;
    }
  }
  cout << "Yes" << endl;
  return 0;
}