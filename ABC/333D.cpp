/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>&u, int index, int ans, vector<bool>mp){
  if (mp.at(index)) return 0;
  mp.at(index) = true;
  if (u.at(index).size() == 1) return 1;

  vector<int>ansmp(0);
  for (int i=0;i<u.at(index).size();i++){
    ans += dfs(u, u.at(index).at(i), ans, mp);
    if (index == 0) ansmp.push_back(ans);
  }

  sort(ansmp.begin(), ansmp.end());
  if (index == 0) return ansmp.at(0);
  else return ans + 1;
}

int main() {
  int n; cin >> n;
  vector<vector<int>>u(n, vector<int>(0));
  for (int i=0;i<n-1;i++){
    int a, b; cin >> a >> b;
    u.at(a-1).push_back(b-1);
    u.at(b-1).push_back(a-1);
  }

  vector<bool>mp(n);
  cout << dfs(u, 0, 0, mp) << endl;

  return 0;
}