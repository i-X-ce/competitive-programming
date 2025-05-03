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

int main() {
  long long n, m; cin >> n >> m;
  vector<int> c(n);
  vector<vector<long long>>a(m, vector<long long>(0));
  for (long long i=0;i<n;i++){
    cin >> c.at(i);
  }
  for (long long i=0;i<m;i++){
    long long k; cin >> k;
    for (long long j=0;j<k;j++){
      cin >> v; v--;
      a.at(i).push_back(v);
    }
  }
  
  return 0;
}