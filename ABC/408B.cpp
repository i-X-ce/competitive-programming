/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void Yes() {
  cout << "Yes" << endl;
}

void No() {
  cout << "No" << endl;
}

int main() {
  int n; cin >> n;
  set<int> st;
  for (int i=0;i<n;i++){
    int a; cin >> a;
    st.insert(a);
  }
  cout << st.size() << endl;
  for (int v : st) {
    cout << v << " ";
  }
  cout << endl;
  return 0;
}