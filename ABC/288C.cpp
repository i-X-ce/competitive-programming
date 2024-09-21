/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<bool>>graph(n+1,vector<bool>(n+1,false));
  for (int i=0;i<m;i++){
    int a,b;
    cin >> a >> b;
    graph.at(a).at(b) = true; graph.at(b).at(a) = true;
  }
  return 0;
}