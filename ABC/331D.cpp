/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void searchB(vector<vector<int>>&bf, int sy, int sx, int vy, int vx, vector<vector<char>>&bc){
  int y = sy; int x = sx;
  int bn = bc.size();
  for (int i=0;i<bn;i++){
    for (int j=0;j<bn;j++){
      if (x-vx >= 0 && x-vx < bn){
        bf.at(y).at(x) += bf.at(y).at(x-vx);
      }
      if (y-vy >= 0 && y-vy < bn){
        bf.at(y).at(x) += bf.at(y-vy).at(x);
      }
      if (x-vx >= 0 && x-vx < bn && y-vy >= 0 && y-vy < bn){
        bf.at(y).at(x) -= bf.at(y-vy).at(x-vx);
      }
      if (bc.at(y).at(x) == 'B') bf.at(y).at(x)++;
      x += vx;
    }
    x = sx;
    y += vy;
  }
}

int main() {
  int n; cin >> n;
  int q; cin >> q;
  vector<vector<char>>p(n, vector<char>(n));
  for (int i=0;i<n;i++) for (int j=0;j<n;j++){
    cin >> p.at(i).at(j);
  }
  vector<vector<int>>ulmp(n, vector<int>(n));
  searchB(ulmp, n-1, n-1, -1, -1, p);
  
  for (int i=0;i<q;i++){
    long long a, b, c, d; cin >> a >> b >> c >> d;
    long long  ans = 0;
    ans += ulmp.at(a%n).at(b%n);
    ans += urmp.at(a%n).at(d%n);
    ans += blmp.at(c%n).at(b%n);
    ans += brmp.at(c%n).at(d%n);
    int bf = d-b-d%n-b%n;
    ans += ulmp.at(a%n).at(0)*(long long)max(0, bf);
    ans += blmp.at(c%n).at(0)*(long long)max(0, bf);
    bf = c-a-c%n-a%n;
    ans += ulmp.at(0).at(b%n)*(long long)max(0, bf);
    ans += urmp.at(0).at(d%n)*(long long)max(0, bf);
    cout << ans << endl;
  }

  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cout << ulmp.at(i).at(j);
    }
    cout << endl;
  }
  return 0;
}