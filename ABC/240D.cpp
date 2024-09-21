/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int sum = 1;
  vector<vector<int>>a(1, vector<int>(2, 0));
  cin >> a.at(0).at(0);
  a.at(0).at(1)++;
  cout << sum << endl;
  for (int i=0;i<n-1;i++){
    int bfa; cin >> bfa;
    sum++;
    if (a.size() == 0){
      a.push_back({bfa, 1});
    }
    else if ((*(a.end()-1)).at(0) == bfa){
      (*(a.end()-1)).at(1)++;
      if ((*(a.end()-1)).at(1) == (*(a.end()-1)).at(0)){
        sum -= bfa;
        a.pop_back();
      } 
    }else{
      a.push_back({bfa, 1});
    }
    cout << sum << endl;
  }
  return 0;
}