/*
g++ 306C.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<tuple<int,int,int>>b(n);
  for (int i=0;i<3*n;i++){
    int c;
    cin >> c;
    get<2>(b.at(c-1)) = c;
    if (get<1>(b.at(c-1)) == 0){
      get<1>(b.at(c-1)) = i+1;
    }else if(get<0>(b.at(c-1)) == 0){
      get<0>(b.at(c-1)) = i+1;
    }
  }
  sort(b.begin(),b.end());
  for (int i=0;i<n;i++){
    cout << get<2>(b.at(i)) << endl;
  }
  return 0;
}