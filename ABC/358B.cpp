/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, a; cin >> n >> a;
  int endtime = 0;
  for (int i=0;i<n;i++){
    int t; cin >> t;
    if (endtime > t){
      cout << endtime + a << endl;
      endtime += a;
    }else{
      cout << t + a << endl;
      endtime = t + a;
    }
  }
  return 0;
}