/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,d;
  cin >> n >> d;
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  int cntdmx = 0, cntd = 0;
  for (int i=0;i<d;i++){
    int cntk = 0;
    for (int j=0;j<n;j++){
      if (s.at(j).at(i) == 'o') cntk++;
      else{
        cntk = -1;
        break;
      }
    }
    if (cntk > 0){
      cntd++;
    }else{
      cntdmx = max(cntd, cntdmx);
      cntd = 0;
    }
  }
  cntdmx = max(cntd, cntdmx);
  cout << cntdmx << endl;
  return 0;
}