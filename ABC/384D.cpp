/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

long long trueMod(long long a, long long b){
  return (a % b + b) % b;
}

int main() {
  int n, s; cin >> n >> s;
  vector<long long>a(n);
  map<long long, long long>mp;
  long long sum = 0;
  cin >> a.at(0);
  long long mina = a.at(0);
  for (int i=1;i<n;i++) {
    cin >> a.at(i);
    min = min(min, a.at(i));
    a.at(i) += a.at(i-1);
  }
  sum = a.at(n-1);
  long long sMod = s % sum;
  for (int i=n-1;i>=0;i--){
    mp[a.at(i) % sMod] = i;
  }
  mp[0] = n;
  if (sMod == 0){
    cout << "Yes" << endl;
    return 0;
  }
  if (s < min){
    cout << "No" << endl;
    return 0;
  }
  for (int i=0;i<n;i++){
    long long mod = trueMod(-(sum-a.at(i)), sMod);
    if (mp.count(mod)){
      if (mp[mod] > i){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}