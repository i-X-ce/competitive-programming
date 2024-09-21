/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  string s; cin >> s;
  if (s.size() == 1){
    cout << 1 << endl;
    return 0;
  }

  int ren = 1;
  map<char, int>smp;
  char pc = s.at(0);
  for (int i=1;i<n;i++){
    if (s.at(i) == pc){
      ren++;
    }else{
      smp[pc] = max(ren, smp[pc]);
      ren = 1;
    }
    pc = s.at(i);
  }
  smp[pc] = max(ren, smp[pc]);

  int ans = 0;
  for (auto itr=smp.begin();itr!=smp.end();itr++){
    ans += (*itr).second;
  }
  cout << ans << endl;
  return 0;
}