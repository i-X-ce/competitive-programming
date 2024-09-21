/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void dfs(int index, vector<vector<int>> &ab, vector<bool> &chk, long long &sum){
  if (chk.at(index)) return;
  chk.at(index) = true;
  sum++;
  for (int i=0;i<ab.at(index).size();i++){
    dfs(ab.at(index).at(i), ab, chk, sum);
  }
}

long long calcSum(long long num){
  return num * (num - 1) / 2;
}

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>>ab(n+1, vector<int>(0));
  for (int i=0;i<m;i++){
    int a, b; cin >> a >> b;
    ab.at(a).push_back(b);
    ab.at(b).push_back(a);
  }

  vector<bool>chk(n+1);
  long long sum = 0;
  for (int i=1;i<=n;i++){
    if (chk.at(i)) continue;
    long long sumbf = 0;
    dfs(i, ab, chk, sumbf);
    sum += calcSum(sumbf);
  }
  
  cout << sum - m << endl;
  return 0;
}