/*
g++ A005.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int a,b,n;
  cin >> a >> b >> n;
  vector<int>p(n);
  for (int i=0;i<n;i++){
    string c;
    int c2;
    cin >> c;
    c2 = c.at(0) - '0';
    if (c == "G")  c2 = 0;
    if (c.size() == 2) {
      c2 = (c.at(0) - '0')*10 + c.at(1) - '0';
    }else{
      if (c.size() == 3) c2 = 100;
    }
    p.at(i) = c2;
  }
  int pt = 0;
  int game = 0;
  while(game < n-1){
    if (p.at(game) == b){
      pt += b + p.at(game+1) + p.at(game+2);
      game++;
    }else{
      if (p.at(game) + p.at(game+1) == b){
        if (p.size() <= game + 3){
          pt += b + p.at(game+2)*2;
        }else{
          pt += b + p.at(game+2);
        }
        game += 2;
      }else{
        pt += p.at(game) + p.at(game+1);
        game += 2;
      }
    }
  }
  cout << pt << endl;
  return 0;
}