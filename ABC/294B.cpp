
#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  char c;
  cin >> h >> w;
  int a[h][w];
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      cin >> a[i][j];
      if (a[i][j] == 0){
        c = '.';
      }else{
        c = a[i][j] + 'A' - 1;
      }
      cout << c;
    }
    cout << endl;
  }
  return 0;
}