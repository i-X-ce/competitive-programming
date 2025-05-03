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

void dfs(long long n, vector<vector<long long>>&path, vector<bool>&visited, long long start) {
  visited.at(start) = true;
  for (int i=0;i<path.at(start).size();i++){
    if (visited.at(path.at(start).at(i)) == false){
      dfs(n, path, visited, path.at(start).at(i));
    }
  }
}

int main() {
  long long n, m; cin >> n >> m;
  vector<vector<long long>>path(m, vector<long long>(0));
  if (n != m) {
    No();
    return 0;
  }
  for (int i=0;i<m;i++){
    long long a, b; cin >> a >> b;
    a--; b--;
    path.at(a).push_back(b);
    path.at(b).push_back(a);
    if (path.at(a).size() > 2 || path.at(b).size() > 2){
      No();
      return 0;
    }
  }

  vector<bool>visited(n);
  dfs(n, path, visited, 0);
  for (int i=0;i<visited.size();i++){
    if (visited.at(i) == false){
      No();
      return 0;
    }
  }

  Yes();
  return 0;
}