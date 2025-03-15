/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  unordered_map<long long, long long> mp, mp2;
  vector<long long>a(n);
  for (long long i=0;i<n-1;i++){
    cin >> a.at(i);
    mp[a.at(i)]++;
  }
  cin >> a.at(n-1);
  mp2[a.at(n-1)]++;
  long long ans = (long long)mp.size() + (long long)mp2.size();
  for (long long i=n-2;i>=1;i--){
    mp[a.at(i)]--;
    if (mp[a.at(i)] == 0) mp.erase(a.at(i));
    mp2[a.at(i)]++;
    ans = max(ans, (long long)mp.size() + (long long)mp2.size());
  }
  cout << ans << endl;
  return 0;
}