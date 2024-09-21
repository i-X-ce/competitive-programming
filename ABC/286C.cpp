/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, a, b; string s;
  cin >> n >> a >> b >> s;
  long long sum = n * max(a, b);
  for (int i=0;i<n;i++){
    long long bfsum = a * i;
    string bfs = s.substr(i,n-i) + s.substr(0, i);
    for (int j=0;j<n/2;j++){
      if (bfs.at(j) != bfs.at(n-j-1)) bfsum += b;
    }
    sum = min(sum, bfsum);
  }
  cout << sum << endl;
  return 0;
}