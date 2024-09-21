/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  map<int, int>mp;
  map<int, long long >mp2;
  vector<int>a(n);
  long long sum = 0;
  for (int i=0;i<n;i++){
    cin >> a.at(i);
    sum += a.at(i);
    mp[a.at(i)]++;
  }
  for (auto p : mp){
    long long bf = p.first;
    sum -= bf*mp[p.first];
    mp2[p.first] = sum;
  }
  for (int i=0;i<n;i++){
    cout << mp2[a.at(i)] << " ";
  }
  cout << endl;
  return 0;
}