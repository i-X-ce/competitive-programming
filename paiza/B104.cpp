/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

bool schk(string s){
  bool ok = true;
  for (char c : s) if (!('0' <= c && c <= '9')) ok = false;
  return ok;
}

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>>sd(n, vector<int>(m));
  for (int i=0;i<n;i++) for (int j=0;j<m;j++){
    string bf; cin >> bf;
    if (schk(bf)){
      int nbf = stoi(bf);
      if (nbf < 0 || 100 < nbf) sd.at(i).at(j) = -1; 
      else sd.at(i).at(j) = stoi(bf);
    }
    else sd.at(i).at(j) = -1;
  }
  for (int i=0;i<m;i++){
    int ncnt = 0;
    int sum = 0;
    for (int j=0;j<n;j++){
      int num = sd.at(j).at(i);
      if (num == -1) continue;
      sum += num;
      ncnt++;
    }
    if (ncnt == 0) cout << 0 << endl;
    else cout << sum / ncnt << endl;
  }

  return 0;
}