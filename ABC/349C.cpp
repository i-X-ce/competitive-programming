/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int bs(vector<int> &values, int value){
  int l = 0, r = values.size();
  int mid;
  if (values.size() == 2){
    if (values.at(0) >= value) return 0;
    else return 1;
  }
  while(r - l >= 1){
    mid = (l + r)/2;
    if (values.at(mid) == value){
      return mid;
    }
    if (values.at(mid) > value) r = mid-1;
    else l = mid+1;
  }
  return mid+1;
}

int main() {
  string s, t; cin >> s >> t;
  vector<vector<int>>slist(26, vector<int>(0));
  for (int i=0;i<s.size();i++){
    slist.at(s.at(i)-'a').push_back(i);
  }
  int cnt = 0;
  for (int i=0;i<3;i++){
    int tc = t.at(i)-'A';
    if (i == 2 && t.at(i) == 'X' && cnt < s.size()) break;
    if (slist.at(tc).size() == 0){
      cout << "No" << endl;
      return 0;
    }
    int tcn = bs(slist.at(tc), cnt);
    // cout << char(tc + 'a') << " cnt:" << cnt  << " tcn:" << tcn << endl;
    if (cnt > slist.at(tc).at(slist.at(tc).size()-1)){
      cout << "No" << endl;
      return 0;
    }else if (slist.at(tc).size() < tcn){
      cnt = slist.at(tc).at(tcn)+1;
    }
  }
  cout << "Yes" << endl;
  return 0;
}