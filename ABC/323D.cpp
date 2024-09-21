/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  map<int, int>s;
  for (int i=0;i<n;i++){
    int a, b; cin >> a >> b;
    s[a] += b;
  }

  int cnt = 0;
  auto itr = s.begin();
  int l = 0;
  while (l<s.size()){
    int key = (itr->first), value = (itr->second);
    if (value > 1){
      s[key*2] += value/2;
      
    }
    if (value%2 == 1) cnt++;
    itr++;
    l++;
  }
  cout << s.size() << endl;
  return 0;
}