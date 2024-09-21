/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cint >> n >> m;
  string s;
  cin >> s;
  vector<vector<char>>charlist(m+1, vector<int>(0));
  vector<int>slist(0);
  for (int i=0;i<n;i++){
    int bf; cin >> bf;
    slist.push_back(bf);
    charlist.at(bf).push_back(s.at(i));
  }

  vector<int>ssm(m);
  for (int i=0;i<n;i++){
    int num = slist.at(i);
    cout << charlist.at((ssm.at(i)+1)%charlist.at(num).size());
    ssm.at(i)++;
  }

  return 0;
}