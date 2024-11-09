/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long q; cin >> q;
  long long li = -1, day = 0;
  vector<long long>st;
  for (long long i = 0; i < q; i++){
    int qu; cin >> qu;
    if (qu == 1){
      st.push_back(day);
    } else if (qu == 2){
      long long t; cin >> t;
      day += t;
    } else {
      long long h; cin >> h;
      auto it = upper_bound(st.begin(), st.end(), day-h);
      if (it == st.begin()){
        cout << 0 << endl;
        continue;
      }
      --it;
      long long dis = distance(st.begin(), it);
      cout << dis - li << endl;
      li = dis;
    }
  }
  return 0;
}