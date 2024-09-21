/*
g++ 306D.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int test(vector<vector<long long>> &xy,int n,bool ok,int s,int &maxs){
  cout << maxs << endl;
  if (n == xy.size()){
    return s;
  }
  if (!ok){
    if (xy.at(n).at(0) == 1){
      return 0;
    }
  }
  maxs = max(test(xy,n+1,ok,s,maxs),maxs);
  if (xy.at(n).at(0) == 1){
    ok = false;
  }else{
    ok = true;
  }
  return max(test(xy,n+1,ok,s+xy.at(n).at(1),maxs),maxs);
}

int main() {
  int n;
  cin >> n;
  vector<vector<long long>>xy(n,vector<long long>(2));
  for (int i=0;i<n;i++){
    cin >> xy.at(i).at(0) >> xy.at(i).at(1);
  }
  int maxs = 0;
  cout << test(xy,0,true,0,maxs);
  return 0;
}