/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int q; cin >> q;
  vector<int>output(0);
  queue<int> que;
  for (int i=0;i<q;i++){
    int t; cin >> t;
    if (t == 1){
      int x; cin >> x;
      que.push(x);;
    } else {
      output.push_back(que.front());
      que.pop();
    }
  }
  for (int i=0;i<output.size();i++){
    cout << output.at(i) << endl;
  }
  return 0;
}