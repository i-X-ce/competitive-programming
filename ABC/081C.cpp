/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  map<int, int>a;
  vector<int>minn(n);
  int cntn = 0;
  for (int i=0;i<n;i++){
    int b;
    cin >> b;
    if (a.count(b)) cntn++;
    a[b]++;
  }
  for (int i=0;i<n;i++){
    if (a.count(i)){
      minn.at(i) = a[i+1];
    }else{
      minn.at(i) = 999999;
    }
    
  }
  sort(minn.begin(), minn.end());
  int cnt = 0;
  for (int i=0;i<cntn-k;i++){
    cnt += minn.at(i);
  }
  for (int i=0;i<n;i++){
    cout << minn.at(i) << endl;
  }
  //cout << cnt << endl;
  return 0;
}