/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long d; cin >> d;
  long long ans = d;
  for (long long i=0;i*i<=d;i++){
    long long c = i*i-d;
    if (i*i-d >= 0){
      ans = min(ans, abs(c));
    }else{
      long long bfc = sqrt(-c);
      ans = min(ans, abs(c+bfc*bfc));
      bfc++;
      ans = min(ans, abs(c+bfc*bfc));
    }
  }
  cout << ans << endl;
  return 0;
}
