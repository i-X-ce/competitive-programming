/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  vector<vector<bool>>world(101, vector<bool>(101));
  int n;
  cin >> n;
  for (int i=0;i<n;i++){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for (int j=c;j<d;j++){
      for (int k=a;k<b;k++){
        world.at(j).at(k) = true;
      }
    }
  }
  int cnt = 0;
  for (int i=0;i<=100;i++){
    for (int j=0;j<=100;j++){
      if (world.at(i).at(j)) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}