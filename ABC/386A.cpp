/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  map<int, int> st;
  for (int i=0;i<4;i++){
    int x; cin >> x;
    st[x]++;
  }
  if (st.size() == 2){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}