/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int q; cin >> q;
  map<long long, long long>st;
  for (int i=0;i<q;i++){
    int qu; cin >> qu;
    long long x;
    if (qu == 1){
      cin >> x;
      st[x]++;
    } else if (qu == 2){
      cin >> x;
      st[x]--;
      if (st[x] <= 0) st.erase(x); 
    } else {
      cout << st.size() << endl;
    }
  }
  return 0;
}