/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, q; cin >> n >> q;
  deque<int> posX;
  deque<int> posY;
  for (int i=0;i<n;i++){
    posX.push_back(i+1);
    posY.push_back(0);
  }
  for (int i=0;i<q;i++){
    int a; cin >> a;
    switch (a){
      case 1:
      char c; cin >> c;
      if (c == 'U'){
        posX.push_front(posX.front());
        posY.push_front(posY.front() + 1);
      }else if (c == 'D'){
        posX.push_front(posX.front());
        posY.push_front(posY.front() - 1);
      }else if (c == 'R'){
        posX.push_front(posX.front() + 1);
        posY.push_front(posY.front());
      }else{
        posX.push_front(posX.front() - 1);
        posY.push_front(posY.front());
      }
      posX.pop_back();
      posY.pop_back();
      break;
    case 2:
      int p; cin >> p;
      cout << posX.at(p-1) << " " << posY.at(p-1) << endl;
      break;
    }
  }
  return 0;
}