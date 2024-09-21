/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  int px; cin >> px;
  int diet = 0, ndiet = 0, dietfb = 0, ndietfb = 0;
  for (int i=0;i<n-1;i++){
    int x; cin >> x;
    if (x > px){
      ndietfb++;
      dietfb = 0;
    }
    else if (x < px){
      dietfb++;
      ndietfb = 0;
    }
    diet = max(diet, dietfb); ndiet = max(ndiet, ndietfb);
    px = x;
  }
  cout << diet << " " << ndiet << endl;
  return 0;
}