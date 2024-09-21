/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (i != j){
        string ss = s.at(i) + s.at(j);
        bool ok = true;
        for (int k=0;k<ss.size()/2;k++){
          if (ss.at(k) != ss.at(ss.size()-k-1)){
            ok = false;
          }
        }
        if (ok){
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}