/*
g++ 289B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

vector<int>reten(int begin,int end,vector<int>a){
  for (int i=0;i<end-begin+1;i++){
    a.at(begin+i) = end-i+1;
  }
  return a;
}

int main() {
  int n,m;
  cin >> n >> m;
  vector<int>a(n);
  vector<int>p(m+1);
  for (int i=0;i<n;i++) a.at(i) = i+1;
  for (int i=0;i<m;i++) cin >> p.at(i);
  int size = 0;
  for (int i=0;i<m;i++){
    if (p.at(i) == p.at(i+1)-1){
      size++;
    }else{
      int begin = p.at(i-size) - 1;
      int end = begin + size + 1;
      a = reten(begin,end,a);
      size = 0;
    }
  } 
  for (int i=0;i<n;i++) cout << a.at(i) << " ";
  return 0;
}