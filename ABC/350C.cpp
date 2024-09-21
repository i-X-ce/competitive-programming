/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  map<int, int> mp;
  vector<int>an(n);
  for (int i=0;i<n;i++){
    int a; cin >> a;
    an.at(i) = a;
    mp[a] = i;
  }
  vector<vector<int>>ans(0, vector<int>(0));
  for (int i=0;i<n;i++){
    int num = i + 1;
    if (mp[num] == i) continue;
    int a1 = mp[num], a2 = i;
    int low = min(a1, a2), high = max(a1, a2);
    mp[num] = a2;
    mp[an.at(a2)] = a1;
    int bf = an.at(a1); an.at(a1) = an.at(a2); an.at(a2) = bf;
    vector<int>ansbf(2);
    ansbf.at(0) = low + 1; ansbf.at(1) = high + 1; 
    ans.push_back(ansbf);
  }
  cout << ans.size() << endl;
  for (int i=0;i<ans.size();i++){
    cout << ans.at(i).at(0) << " " << ans.at(i).at(1) << endl;
  }
  return 0;
}