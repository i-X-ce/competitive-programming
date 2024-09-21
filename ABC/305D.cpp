/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n;
  cin >> n;
  vector<vector<long long>>a(n,vector<long long>(2));
  for (int i=0;i<n;i++){
    cin >> a.at(i).at(0);
    a.at(i).at(1) = i%2;
  }
  long long q;
  cin >> q;
  for (long long i=0;i<q;i++){
    long long l,r,ans;
    cin >> l >> r;
    ans = 0;
    for (long long j=0;j<n;j++){
      if (a.at(j).at(0) >= l){
        if (a.at(j).at(1) == 0){
          if (a.at(j).at(0) >= r){
            ans += r - l;
          }else{
            ans += a.at(j).at(0)-l;
          }
        }
        l = a.at(j).at(0);
      }
      if (l >= r){
        cout << ans << endl;
        break;
      }
    }
  }
  return 0;
}