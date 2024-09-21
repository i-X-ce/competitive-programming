/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m,t;
  cin >> n >> m >> t;
  vector<int>a(n-1);
  for (int i=0;i<n-1;i++) cin >> a.at(i);
  map<int,int>x;
  for (int i=0;i<m;i++){
    int a;
    cin >> a;
    cin >> x[a];
  }
  for (int i=0;i<n-1;i++){
    t -= a.at(i);
    if (t <= 0){
      cout << "No" << endl;
      return 0;
    }
    t += x[i+1];
  }
  cout << "Yes" << endl;
  return 0;
}