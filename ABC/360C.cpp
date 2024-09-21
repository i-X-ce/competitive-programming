/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<vector<int>>w(n, vector<int>(0));
  for (int i=0;i<n;i++) cin >> a.at(i);
  for (int i=0;i<n;i++){
    int bf; cin >> bf;
    w.at(a.at(i)-1).push_back(bf);
  }
  long long sum = 0;
  for (int i=0;i<n;i++){
    if (w.at(i).size() > 1){
      sort(w.at(i).begin(), w.at(i).end());
      int index = 0;
      while(index+1 < w.at(i).size()){
        sum += w.at(i).at(index);
        index++;
      }
    }
  }
  cout << sum << endl;
  return 0;
}