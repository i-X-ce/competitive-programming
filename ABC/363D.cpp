/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  if (n <= 10){
    cout << n-1 << endl;
  }
  long long ten = 0;
  long long sum = 10;
  while(n>sum){
    sum+=9*pow(10,ten);
    ten++;
  }
  n-=sum-9*pow(10,ten-1)+1;
  ten++;
  long long ans = pow(10,(ten+1)/2-1) + n;
  string s = to_string(ans), t = s;
  if (n%2 == 0) t.pop_back();
  reverse(t.begin(), t.end());
  cout << s << t << endl;
  return 0;
}