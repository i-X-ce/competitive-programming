/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>a(n);
  for (int i=0;i<n;i++) cin >> a.at(i);
  vector<vector<int>>st(n-1, vector<int>(2));
  for (int i=0;i<n-1;i++){
    cin >> st.at(i).at(0) >> st.at(i).at(1);
  }
  for (int i=0;i<n;i++){
    int target = n-2;
    while(target != 0){
      if (a.at(target) < st.at(target).at(0)) target--;
      else break;
    }
    a.at(target) -= st.at(target).at(0);
    a.at(target+1) += st.at(target).at(1);
    // cout << target << " ";
  }
  // cout << endl;
  cout << a.at(n-1) << endl;
  return 0;
}