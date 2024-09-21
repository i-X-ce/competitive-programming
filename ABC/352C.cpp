/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<vector<long long>>pa(n, vector<long long>(3));
  vector<vector<long long>>pb(n, vector<long long>(3));
  long long sum = 0;
  for (int i=0;i<n;i++){
    long long a, b; cin >> a >> b;
    pa.at(i).at(0) = a; pa.at(i).at(1) = b - a; pa.at(i).at(2) = i;
    pb.at(i).at(0) = b - a; pb.at(i).at(1) = a; pb.at(i).at(2) = i;
    sum += a;
  }
  sort(pa.rbegin(), pa.rend());
  sort(pb.rbegin(), pb.rend());
  // long long ans1 = sum + pa.at(0).at(1);
  // long long ans2 = sum + (pa.at(0).at(2) == pb.at(0).at(2) ? pb.at(0).at(0) - pb.at(0).at(1) : pb);
  cout << sum + pb.at(0).at(0) << endl;
  return 0;
}