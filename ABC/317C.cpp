/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  // long long n, d, p;
  // cin >> n >> d >> p;
  // vector<vector<long long>>ans(n+1, vector<long long>(0));
  // ans.at(0).push_back(0);
  // vector<vector<long long>>chike(n+1, vector<long long>(0));
  // chike.at(0).push_back(0);
  // long long minyen;
  // for (int i=1;i<=n;i++){
  //   long long f;
  //   cin >> f;
  //   for (int j=0;j<ans.at(i-1).size();j++){
  //     if (i == n && j == 0) minyen = ans.at(i-1).at(0) + f;
  //     long long yen = ans.at(i-1).at(j);
  //     long long maisu = chike.at(i-1).at(j);
  //     ans.at(i).push_back(f+yen);
  //     chike.at(i).push_back(maisu);
  //     if (i == n) minyen = min(minyen, f+yen);
  //     if (maisu == 0){
  //       ans.at(i).push_back(yen+p);
  //       chike.at(i).push_back(d-1);
  //       if (i == n) minyen = min(minyen, yen+p);
  //     }else{
  //       ans.at(i).push_back(yen);
  //       chike.at(i).push_back(maisu-1);
  //       if (i == n) minyen = min(minyen, yen);
  //     }
  //   }
  // }
  // cout << minyen << endl;

  long long n, d, p;
  cin >> n >> d >> p;
  vector<long long>f(n), s(n);
  for (int i=0;i<n;i++){
    cin >> f.at(i);
  }
  sort(f.begin(), f.end());
  s.at(0) = f.at(0);
  for (int i=1;i<n;i++) s.at(i) = s.at(i-1) + f.at(i);
  int k = n / d;
  if (n%d > 0) k++;
  long long minyen = s.at(n-1);
  for (int i=0;i<=k;i++){
    if (n-1-i*d < 0) break;
    minyen = min(minyen, s.at(n-1-i*d)+i*p);
  }
  minyen = min(minyen, k*p);
  cout << minyen << endl;
  return 0;
}