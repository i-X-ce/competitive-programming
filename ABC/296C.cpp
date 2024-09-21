
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,x;
  cin >> n >> x;
  int a[n];
  for (auto&y:a) cin >> y;
  sort(a,a+n);
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (a[i]-a[j] == x || a[j]-a[i] == x){
        cout << "Yes";
        return 0;
      }
    }
  }
  cout << "No";
  return 0;
}