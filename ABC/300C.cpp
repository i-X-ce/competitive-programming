
#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;
  int n[min(h,w)];
  for (int i=0;i<min(h,w);i++){
    n[i]=0;
  }
  string c[h];
  for (auto&x:c)cin >> x;
  for (int i=1;i<h;i++){
    for (int j=0;j<w;j++){
      int ok=4;
      int size=0;
      if (c[i][j] == '#'){
        while(ok==4){
          ok=0;
          size++;
          if (i-size>=0 && j-size>=0 && i+size<=h-1 && j+size<=w-1){
            if (c[i-size][j-size] == '#') ok++;
            if (c[i-size][j+size] == '#') ok++;
            if (c[i+size][j-size] == '#') ok++;
            if (c[i+size][j+size] == '#') ok++;
          }
        }
        if (size>1){
          n[size-2]++;
        }
      }
    }
  }
  for (int i=0;i<min(h,w);i++){
      cout << n[i] << " ";
  }
  return 0;
}