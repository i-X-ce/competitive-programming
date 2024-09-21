/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; string t;
  cin >> n >> t;
  vector<string>s(n);
  for (int i=0;i<n;i++){
    cin >> s.at(i);    
  }
  vector<int>ans;
  vector<int>f(s.size());

  for (int i=0;i<s.size();i++){
    int fcnt = 0;
    bool ok = true;
    int a = s.at(i).size() - t.size();
    if (abs(a) > 1) continue;
    for (int j=0;j<s.at(i).size();j++){
      if (s.at(i).size() == t.size()){
        if (s.at(i).at(j) != t.at(j)) fcnt++;
      }else if (s.at(i).size() > t.size()){
        if (s.at(i).at(j) != t.at(j - fcnt)){
          fcnt++;
        }
      }else if (s.at(i).size() < t.size()){
        if (s.at(i).at(j) != t.at(j + fcnt)){
          fcnt++;
        }
      }
      if (fcnt >= 2){
        ok = false;
        break;
      }
    }
    if (ok) ans.push_back(i);
  }

  cout << ans.size() << endl;
  for (int i=0;i<ans.size();i++) cout << ans.at(i) + 1<< endl;
  return 0;
}