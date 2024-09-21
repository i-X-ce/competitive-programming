/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<vector<int>>lr(n, vector<int>(2));
  for (int i=0;i<n;i++) cin >> lr.at(i).at(1) >> lr.at(i).at(0);
  sort(lr.begin(), lr.end());
  long long ans = 0;
  queue<vector<int>> q;
  for (int i=0;i<n;i++){
    vector<int>lrbf;
    while(q.size() != 0){
      lrbf = q.front();
      if (lrbf.at(0) >= lr.at(i).at(1)) break;
      q.pop();
    }
    ans += (long long)q.size();
    q.push(lr.at(i));
  }
  cout << ans << endl;
  return 0;
}