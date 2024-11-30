/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void addAdd(vector<int>&add, int mod, int index){
  if (index >= add.size()) return;
  add.at(index)++;
  for (int i=0;i<index;i++) add.at(i) = add.at(index);
  if (add.at(index) > mod){
    addAdd(add, mod, index + 1);
  }
}

int main() {
  int n, m; cin >> n >> m;
  vector<int>add(n, 0);
  vector<vector<int>>ans(0, vector<int>(n));
  while(true){
    vector<int>temp(n);
    for (int i=0;i<n;i++) temp.at(i) = i * 10 + add.at(n-i-1) + 1;
    ans.push_back(temp);
    int mod = m-(n-1)*10-1;
    addAdd(add, mod, 0);
    if (add.at(0) > mod) break;
  }
  cout << ans.size() << endl;
  for (int i=0;i<ans.size();i++){
    for (int j=0;j<ans.at(i).size();j++){
      cout << ans.at(i).at(j) << " ";
    }
    cout << endl;
  }
  return 0;
}