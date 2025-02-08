/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<int>a(m);
  for (int i=0;i<m;i++) cin >> a.at(i);
  sort(a.begin(), a.end());
  int index = 0;
  vector<int>list(0);
  for (int i=1;i<=n;i++){
    if (index >= a.size() || a.at(index) != i){
      list.push_back(i);
    } else {
      index++;
    }
  }
  cout << list.size() << endl;
  for (int i=0;i<list.size();i++){
    cout << list.at(i) << " ";
  }
  cout << endl;
  return 0;
}