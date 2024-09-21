/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

long long c2(long long n){
  return n * (n-1) / 2;
}

int main() {
  string s; cin >> s;
  vector<long long>slist(26, 0);
  for (int i=0;i<s.size();i++){
    char a = s.at(i);
    slist.at(a-'a')++;
  }
  long long same = 0;
  for (int i=0;i<26;i++){
    same += c2(slist.at(i));
  }
  long long sum = c2(s.size());
  long long ans = sum - same;
  if (same != 0) ans++; 
  cout << ans << endl;
  return 0;
}