/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int n, m;

void dfs(vector<map<int,int>> &road, int number, int &maxk, vector<bool> &ashi, int bfk){
  if (!ashi.at(number)) return;
  ashi.at(number) = false;
  for (int i=1;i<=n;i++){
    if (road.at(number)[i] == 0);
    else{
      bfk += road.at(number)[i];
      maxk = max(bfk, max);
      dfs(road, i, maxk, ashi, bfk)
    }
  }
}

int main() {
  cin >> n >> m;
  vector<map<int, int>>road(n+1);
  for (int i=0;i<n;i++){
    int a,b,c;
    cin >> a >> b >> c;
    road.at(a)[b] = c;
    road.at(b)[a] = c;
  }

  int maxk = 0;
  for (int i=1;i<=n;i++){
    int bfk = 0;
    vector<bool>ashi(n+1);
    dfs(road, i, maxk, ashi, bfk);
  }
  return 0;
}