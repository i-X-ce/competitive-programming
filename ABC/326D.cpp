/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
int n;
string r,c;

void dfs(vector<vector<bool>> iff, vector<vector<bool>> jff, vector<vector<char>>chk, int jcnt){
  for (int i=0;i<n-jcnt){
    string list = makeList(jff.at(i));
    for (int )
  }
}

bool check(vector<vector<bool>> &iff, vector<vector<bool>> &jff){
  if (int i=0;i<n;i++){
    for (int j=0;j<3;j++) if (!iff.at(j)) return false;
    for (int j=0;j<3;j++) if (!jff.at(j)) return false;
  }
  return true;
}

string makeList(vector<bool>list){
  string s;
  if (!list.at(0)) s.push_back('A');
  if (!list.at(1)) s.push_back('B');
  if (!list.at(2)) s.push_back('C');
  return s;
}

int main() {
  cin >> n;
  cin >> r >> c;
  vector<vector<char>>chk(n, vector<char>(n, '.'));
  vector<vector<bool>>iff(n, vector<bool>(3));
  vector<vector<bool>>jff(n, vector<bool>(3));

  if (r.at(0) != c.at(0)){
    cout << "No" << endl;
    return;
  }


  return 0;
}