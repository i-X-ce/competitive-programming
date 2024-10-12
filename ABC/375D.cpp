/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct Data
{
  int index;
  int cnt;
  int sum;
};


int main() {
  string s; cin >> s;
  map<char, Data>mp;
  int ans = 0;
  for (int i=0;i<s.size();i++){
    if (mp.count(s.at(i))){
      int mcnt = mp[s.at(i)].cnt;
      if (i - mp[s.at(i)].index <= 1) mcnt--;
      mp[s.at(i)].sum = mp[s.at(i)].sum*2 + (i - mp[s.at(i)].index - 1) * mcnt;
      ans += mp[s.at(i)].sum;
      mp[s.at(i)].index = i;
      mp[s.at(i)].cnt++;
    } else {
      mp[s.at(i)] = {i, 1, 0};
    }
  }
  
  cout << ans << endl;
  return 0;
}