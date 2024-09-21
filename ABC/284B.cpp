/*
g++ 284B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void test(int n,vector<int>a){
  int cnt = 0;
  for (int i=0;i<n;i++){
    if (a.at(i)%2 == 1) cnt++;
  }
  cout << cnt << endl;
  return;
}

int main() {
  int t;
  cin >> t;
  for (int i=0;i<t;i++){
    int n;
    cin >> n;
    vector<int>a(n);
    for (int j=0;j<n;j++) cin >> a.at(j);
    test(n,a);
  }
  return 0;
}