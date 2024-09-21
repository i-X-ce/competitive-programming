/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, k; cin >> n >> k;
  string s; cin >> s;
  sort(s.begin(), s.end());
  int cnt = 0;
  do{
    bool ook = true;
    for (int i=0;i<n-k+1;i++){
      bool ok = true;
      for (int j=0;j<k/2;j++){
        if (s.at(i+j) != s.at(i+k-j-1)) ok = false;
        // if (s == "xyaywbcwxz"){
        //   cout << s.at(i+j) << "," << s.at(i+k-j-1) << " ";
        // }
      }
      if (ok) ook = false;
      // if (s == "xyaywbcwxz") cout << ok << " ";
    }
    if (ook) {
      cnt++;
    }
  }while(next_permutation(s.begin(), s.end()));
  cout << cnt << endl;
  return 0;
}