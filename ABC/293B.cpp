
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,cnt;
  cnt = 0;
  cin >> n;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];
  for (int i=0;i<n;i++){
    if (a[i] && a[a[i]-1] != 0){
      a[a[i]-1] = 0;
      cnt++;
    }
  }
  cout << n - cnt << endl;
  for (int i=0;i<n;i++){
    if (a[i]){
      cout << i + 1 << " ";
    }
  }
  return 0;
}