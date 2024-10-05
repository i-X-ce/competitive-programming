/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct Data
{
  int a, b, c, d;
};


int main() {
  int n, t, s; cin >> n >> s >> t;
  long double ans = numeric_limits<long double>::max();
  vector<Data>ds(n);
  for (int i=0;i<n;i++){
    int a, b, c, d; cin >> a >> b >> c >> d;
    ds.at(i) = {a, b, c, d};
  }
  vector<int>ind(n); for (int i=0;i<n;i++) ind.at(i) = i;
  sort(ind.begin(), ind.end());
  do{
    for (int i=0;i<(1<<n);i++){
      long double tempans = 0;
      int x = 0, y = 0;
      bitset<6>bt(i);
      for (int j=0;j<n;j++){
        int sx = bt.test(j) ? ds.at(ind.at(j)).a : ds.at(ind.at(j)).c, 
            sy = bt.test(j) ? ds.at(ind.at(j)).b : ds.at(ind.at(j)).d,
            ex = bt.test(j) ? ds.at(ind.at(j)).c : ds.at(ind.at(j)).a,
            ey = bt.test(j) ? ds.at(ind.at(j)).d : ds.at(ind.at(j)).b;
        tempans += sqrtl(powl(sx-x,2)+powl(sy-y,2)) / s;
        tempans += sqrtl(powl(ex-sx,2)+powl(ey-sy,2)) / t;
        x = ex; y = ey;
      }
      ans = min(ans, tempans);
    }
  }while(next_permutation(ind.begin(), ind.end()));
  cout << fixed << setprecision(16) << ans << endl;
  return 0;
}