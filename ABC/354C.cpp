/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<vector<int>>ca(n, vector<int>(3));
  for (int i=0;i<n;i++){
    cin >> ca.at(i).at(1) >> ca.at(i).at(0);
    ca.at(i).at(2) = i + 1;
  }
  sort(ca.begin(), ca.end());
  set<int>st;
  int bf = ca.at(0).at(1);
  st.insert(ca.at(0).at(2));
  for (int i=1;i<n;i++){
    if (ca.at(i).at(1) > bf){
      st.insert(ca.at(i).at(2));
      bf = ca.at(i).at(1);
    }
  }
  cout << st.size() << endl;
  for (int index : st){
    cout << index << " ";
  }
  cout << endl;
  return 0;
}