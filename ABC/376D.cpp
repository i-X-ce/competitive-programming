/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct Data
{
  int index;
  int sum;
};


int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>>as(n, vector<int>(0));
  for (int i=0;i<m;i++){
    int a, b; cin >> a >> b; a--; b--;
    as.at(a).push_back(b);
  }
  int ans = n+1;
  queue<Data> q; bool first = true;
  q.push({0, 0});
  while(!q.empty()){
    for (int i=0;i<q.size();i++){
      Data d = q.front();
      q.pop();
      if (d.index == 0 && !first || d.sum >= ans){
        ans = min(ans, d.sum);
        continue;
      }
      for (int j=0;j<as.at(d.index).size();j++){
        q.push({as.at(d.index).at(j), d.sum+1});
      }
      first = false;
    }
  }
  cout << (ans == n+1 ? -1 : ans) << endl;
  return 0;
}